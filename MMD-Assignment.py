import cv2
import matplotlib.pyplot as plt
import numpy as np

def show_images(images, titles):
    n = len(images)
    plt.figure(figsize=(15, 5))
    for i in range(n):
        plt.subplot(1, n, i + 1)
        plt.imshow(images[i])
        plt.title(titles[i])
        plt.axis('off')
    plt.show()

image_path = 'naruto.jpg'  
image = cv2.imread(image_path)

image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

image_gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
image_hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
image_lab = cv2.cvtColor(image, cv2.COLOR_BGR2Lab)
image_ycrcb = cv2.cvtColor(image, cv2.COLOR_BGR2YCrCb)
image_hls = cv2.cvtColor(image, cv2.COLOR_BGR2HLS)

images = [image_rgb, image_gray, image_hsv, image_lab, image_ycrcb, image_hls]
titles = ['RGB', 'Grayscale', 'HSV', 'Lab', 'YCrCb', 'HLS']

show_images(images, titles)
