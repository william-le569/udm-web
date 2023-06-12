import geocoder
import folium

g = geocoder.ip('me')

# geting latitute and longtitude properties of object g
g.latlng

# my_map1 = folium.Map(location = [28.5011226, 77.4099794],                                      zoom_start = 12 )
print(g)