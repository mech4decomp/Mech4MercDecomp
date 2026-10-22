/*
 * FUN_10039f08 (185 B) — __stdcall.
 * Builds a string table at g_10051d74, compares entries, returns the table
 * (or g_10051d8c if all matched).
 */

extern void __cdecl FUN_1003c3c5(void);   /* malloc */
extern void __cdecl FUN_1003a0dc(void);
extern void __cdecl FUN_1003c510(void);
extern void __cdecl FUN_1003eb10(void);   /* strcmp */
extern void __cdecl FUN_1003c2dc(void);   /* free */

extern int g_10051d74;
extern int g_10051d80;
extern int g_10051d7c;
extern int g_10051d8c;

__declspec(naked) void __stdcall FUN_10039f08(void)
{
    __asm {
        mov     eax, dword ptr [g_10051d74]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    1
        test    eax, eax
        pop     ebp
        jnz     L_928
        push    0x351
        call    FUN_1003c3c5
        pop     ecx
        mov     dword ptr [g_10051d74], eax
    L_928:
        and     byte ptr [eax], 0
        push    dword ptr [g_10051d80]
        mov     edi, 0x1004b708
        push    edi
        push    dword ptr [g_10051d7c]
        push    3
        push    dword ptr [g_10051d74]
        call    FUN_1003a0dc
        mov     esi, 0x10051d80
        add     esp, 0x14
        mov     ebx, esi
    L_954:
        push    0x1004b700
        push    dword ptr [g_10051d74]
        call    FUN_1003c510
        push    dword ptr [esi + 0xc]
        add     esi, 0xc
        push    dword ptr [ebx]
        call    FUN_1003eb10
        add     esp, 0x10
        test    eax, eax
        jz      L_97a
        xor     ebp, ebp
    L_97a:
        push    dword ptr [esi]
        mov     ebx, esi
        push    edi
        push    dword ptr [esi - 0x4]
        push    3
        push    dword ptr [g_10051d74]
        call    FUN_1003a0dc
        add     esp, 0x14
        cmp     esi, 0x10051db0
        jl      L_954
        pop     edi
        pop     esi
        test    ebp, ebp
        pop     ebp
        pop     ebx
        jnz     L_9a8
        mov     eax, dword ptr [g_10051d74]
        ret
    L_9a8:
        push    dword ptr [g_10051d74]
        call    FUN_1003c2dc
        and     dword ptr [g_10051d74], 0
        mov     eax, dword ptr [g_10051d8c]
        pop     ecx
        ret
    }
}
