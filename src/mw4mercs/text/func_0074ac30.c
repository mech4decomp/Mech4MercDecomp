/*
 * FUN_0074ac30 (166 B) — dispatcher on a primitive-type parameter
 * (param_6): routes to FUN_0074a840 (type 1) or FUN_0074a770 (types 2/3),
 * or asserts on an unknown type. RET 0x18 (6 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00713de0(void);
extern int __cdecl FUN_006fab90(const char *msg);
extern void __cdecl FUN_0074a770(void);
extern void __cdecl FUN_0074a840(void);

/* data */
extern char g_87c254;   /* 0x0087C254 */
extern int g_85a248;    /* 0x0085A248 */

__declspec(naked) void func_0074ac30(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     al, byte ptr [g_87c254]
        test    al, al
        jz      l_afterflag
        call    FUN_00713de0

    l_afterflag:
        mov     eax, dword ptr [ebp + 0x1c]
        dec     eax
        jz      l_case1
        dec     eax
        jz      l_case2
        dec     eax
        jz      l_case3
        push    0x7aa9a8
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_ret
        int     3
        pop     ebp
        ret     0x18

    l_case3:
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x10]
        push    0
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    edx
        mov     edx, dword ptr [ecx + 0xc]
        push    eax
        mov     eax, dword ptr [g_85a248]
        push    edx
        push    4
        push    eax
        call    FUN_0074a770
        pop     ebp
        ret     0x18

    l_case2:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    0
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    edx
        mov     edx, dword ptr [ebp + 0x8]
        push    eax
        mov     eax, dword ptr [edx + 0xc]
        push    ecx
        mov     ecx, dword ptr [g_85a248]
        push    eax
        push    2
        push    ecx
        call    FUN_0074a770
        pop     ebp
        ret     0x18

    l_case1:
        mov     edx, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    0
        push    edx
        mov     edx, dword ptr [ecx + 0xc]
        push    eax
        mov     eax, dword ptr [g_85a248]
        push    edx
        push    1
        push    eax
        call    FUN_0074a840

    l_ret:
        pop     ebp
        ret     0x18
    }
}
