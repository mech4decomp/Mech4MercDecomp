/*
 * FUN_1002d890 (138 B) - __stdcall, RET 0xc.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_1002af80(void);   /* rel32 call; __stdcall name matches the def, naked body bytes unchanged */
extern void __cdecl FUN_10038141(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern char g_10050d08[];                 /* push offset (data addr) */

__declspec(naked) void __stdcall FUN_1002d890(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        lea     eax, [esp + 0xc]
        push    eax
        lea     edi, [ebx + 0x84]
        push    edi
        mov     dword ptr [esp + 0x14], 0
        call    FUN_1002af80
        test    eax, eax
        mov     esi, dword ptr [esp + 0x1c]
        jl      L_90a
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi + 8]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    ebp
        push    ebx
        push    offset g_10050d08
        push    ecx
        push    edx
        call    FUN_10038141
        add     esp, 0x14
        cmp     edi, ebp
        mov     ebx, eax
        jz      L_8e3
        push    ebp
        call    FUN_10001d60
        add     esp, 4
L_8e3:
        test    ebx, ebx
        pop     ebp
        jl      L_90a
        mov     edi, dword ptr [esi + 4]
        mov     edx, dword ptr [esi]
        mov     ecx, dword ptr [esi + 8]
        add     edi, ebx
        lea     eax, [ebx + ebx]
        sub     edx, ebx
        mov     dword ptr [esi + 4], edi
        add     ecx, eax
        pop     edi
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 8], ecx
        pop     esi
        mov     al, 1
        pop     ebx
        pop     ecx
        ret     0xc
L_90a:
        pop     edi
        mov     dword ptr [esi + 8], 0
        pop     esi
        xor     al, al
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
