from math import atan2, sin, cos, sqrt, log10, radians, pi
from random import randint


class Particle():

	def __init__(self, x_pos, y_pos, z_pos, x_vel=0, y_vel=0, z_vel=0, mass=1, grav):
		self.x_pos = float(x_pos)
		self.y_pos = float(y_pos)
		self.z_pos = float(z_pos)
		self.x_vel = x_vel
		self.y_vel = y_vel
		self.z_vel = z_vel
		self.mass = float(mass)
		self.grav = grav
		
	def data(self):
		return (self.x_pos, self.y_pos, self.z_pos, self.mass)
		
	def gravity(self. p2data):
	
		
		p2x, p2y, p2z, p2mass = p2data
		diff_x = p2x - self.x_pos
		diff_y = p2y - self.y_pos
		diff_z = p2z - self.z_pos
		angle = ##Find direction angle in 3-dimensions##
		distance = sqrt(diff_x**2 + diff_y**2 + diff_z**2)
		if distance > 2:
			acceleration = (self.grav*self.mass*p2mass)/distance
			self.x_vel += acceleration * cos ##must finish##
			
			