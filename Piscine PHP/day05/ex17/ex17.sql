SELECT
	COUNT(*) AS 'nb_abo',
	FLOOR(AVG(`price`)) AS 'moy_abo',
	SUM(MOD(`duration_sub`,42)) AS 'ft'
FROM `subscription`
;
