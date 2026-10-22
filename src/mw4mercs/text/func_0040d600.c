/*
 * FUN_0040d600 (53 B) — computes fsincos of g_0076d078, stores cos/sin
 *   into a stack buffer, returns AL=1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076d078;

__declspec(naked) void FUN_0040d600(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [g_0076d078]
        lea     ecx, [ebp-0x4]
        lea     edx, [ebp-0x14]
        push    ebx
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp-0x8], ecx
        mov     dword ptr [ebp-0xc], edx
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebp-0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
