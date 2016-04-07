#include <iostream>
#include <math.h>

#ifndef SIMPLEKALMAN_H
#define SIMPLEKALMAN_H



class Kalman
{
public:
	
	Kalman(double iq=0,double ir=0)
	{
		x = 0;
		q = iq;
		r = ir;
		
		p = sqrt(q * q + r * r); //p������q�Pr������M�}�ڸ�
	}

	double Update(double value)
	{
		p += q;
		k = p / (p + r); 
		//�H�ۮɶ���s�ɡA�{�b�����G�|�O�W�@�ӵ��G�[�W�W�@�ӵ��G�M�{�b�q�����G���t�A���H�W�q����
		x += k * (value - x);
		//�U�@�ӵ��G�w�������t�ȴN�i�H�Np���W1 - k�᪺�Ȧb�[�Wq�w���~�t�ȱo��U�@�ӭn�ץ������G
		p *= (1 - k);
		return x;
	}

	double GetK(){return k;}
	double Getq(){return q;}
	double Getr(){return r;}

private:
	double k; //kalman gain �d���ҼW�q
	double p; //estimation error cvariance  �w���~�t
	double q; //process noise cvariance
	double r; //measurement noise covariance �P�����~�t
	double x; //value �������A��
};


#endif