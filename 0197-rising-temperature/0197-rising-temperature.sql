# Write your MySQL query statement below
select s.id 
from Weather f
join Weather s on f.temperature<s.temperature and DATEDIFF (f.recordDate ,s.recordDate ) = -1