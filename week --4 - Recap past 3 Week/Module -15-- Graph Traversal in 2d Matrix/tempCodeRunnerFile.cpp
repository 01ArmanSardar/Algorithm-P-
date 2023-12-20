vector<pii> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool is_valid(int ci, int cj)
{
    if (ci >= 0 && ci < n && cj >= 0 && cj < m && ar[ci][cj]=='.')
        return true;
    else
        return false;
}