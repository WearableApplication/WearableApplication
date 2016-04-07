/************************************************************************
* Attitude and heading reference system                                
*
*	Reset
*	initialize all parameter of AHRS 
*
*
*	MahonyAHRSupdateIMU
*	use accelerator value calibrate gyroscope value and integral to compute hand orientation as quaternion unit
*	�]���y�Шt�����Y�A�ഫ���ᤧquaternion�ƭȻݦA��90�פ~��bpanel�W�e�X���T���A
*
*	AHRSupdatePostion
*	input accelerator value and gyroscope value
*   first compute hand orientation
*   then use transform matrix to get G value and compute linear acc
*	finally integral the linear acc to get hand position
*	�`�N: �]����M�����W���P������V�ۤϡA�]���b���@�y�Шt�ഫ
* 
*
*	DownAccuracy
*	���C�ƭȺ��
*
*	QuaternProd
*   compute Quaternion product
*
*	Quatern2Matrix
*   transform quaternion to transform matrix 
*	
*	GetlinPostion
*	get hand tracking position 
*	@return(Vector3) hand position
*
*	GetOritation
*   get hand AHRS orientation(quaternion) result
*   @return(Quaternion) hand orientation
***********************************************************************/
#include <iostream>
#include <math.h>
#include <time.h>

#ifndef AHRS_H
#define AHRS_H


#include "Math/BasicMath.h"
#include "Math/Matrix3.h"
#include "Math/Quaternion.h"
#include "Math/Vector4.h"
#include "Kalman/SimpleKalman.h"
#include "Butterworth/ButterworthFilter.h"

class AHRS{

public:
	AHRS(float sampleFreq);
	
	void       Reset();
	void       MahonyAHRSupdateIMU(Vector3 gyro,Vector3 acc);
	void       AHRSupdatePostion(Vector3 gyro,Vector3 acc);
	double     DownAccuracy(double d);

	Vector4    QuaternProd (Vector4 quat, Vector4 refer);
	void       Quatern2Matrix();

	Vector3    GetlinPostion();
	Quaternion GetOritation();
	

private:

	
	float       m_samplePeriod;             //sample frequency
		
	float       m_kp;                       //�[�t���v��
	float       m_ki;                       //�~�t�n���W�q

	//inertial navigation
	Quaternion  m_Quaternion;               //final hand orientation for output
	Vector3     m_gravityDirectionTrues;    //gravity value from sensor
	Vector3     m_gravityDirection;         //Estimated direction of gravity from AHRS system
	Vector3     m_integralFB;               //integral feedback
	Vector3     m_eulerAngle;               //euler angle which transform from quaternion             

	//position system
	Vector3     G;                          //�[�v�p��o�쪺���O�[�t�׭�
	float       alpha;                      //�[�v��
	Matrix3     m_RotationMatrix;           //��quaternion�ഫ�o�쪺����x�}
	Vector3     m_linAcc;                   //�u�ʥ[�t�׭�
	Vector3     m_linPosition;	            //�n���o�쪺�u�ʦ�m
	Vector3     m_linPositionHP;	        //�g�LButter worth filter��high pass filter �᪺��m
	Vector3     m_Position;                 //Final hand position for output

	//Butterworth Filter for velocity and position
	cButterworthFilter *m_pVelocityXHP, *m_pVelocityYHP, *m_pVelocityZHP; 
	cButterworthFilter *m_pPositionXHP, *m_pPositionYHP, *m_pPositionZHP;
};

#endif