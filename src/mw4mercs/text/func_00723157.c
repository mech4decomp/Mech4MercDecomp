/*
 * FUN_00723157 (extent 0x723157-0x72317d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0087dd1c;
extern int    g_0087dd20;
extern char   g_0087dd60;

__declspec(naked) void FUN_00723157(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    byte ptr [g_0087dd60], 1
        mov    dword ptr [g_0087dd20], eax
        mov    dword ptr [g_0087dd1c], ecx
        ret    8
    }
}
