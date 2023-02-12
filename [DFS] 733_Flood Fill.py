class Solution:
    def floodFill(self, image, sr, sc, newColor):
        R, C = len(image), len(image[0])
        color = image[sr][sc]

        def dfs(r, c):
            if -1 < r < R and -1 < c < C:
                if image[r][c] == newColor:
                    return
                if image[r][c] != color:
                    return
                if image[r][c] == color:
                    image[r][c] = newColor
                dfs(r-1, c)
                dfs(r+1, c)
                dfs(r, c-1)
                dfs(r, c+1)
        dfs(sr, sc)
        return image
