/*
 * FUN_004e5a10 (416 B) — MLR/Adept state-engine factory (__thiscall, RET 4).
 * Dispatches on a type tag via FUN_00415230 against a chain of globals,
 * allocating + constructing the matching object and returning it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007da6ac;
extern int   g_007b97fc;
extern int   g_007da6a8;
extern int   g_007da69c;
extern int   g_007da6a0;
extern int   g_007b96cc;
extern int   g_007b96b4;
extern void  FUN_00415230(void);
extern void  FUN_004084d0(void);
extern void  FUN_004e4c70(void);
extern void  FUN_004e4cf0(void);
extern void  FUN_004e4cb0(void);
extern void  FUN_004e5160(void);
extern void  FUN_004e50e0(void);
extern void  FUN_004e5220(void);
extern void  FUN_004e52e0(void);
extern void  FUN_004179b0(void);
extern void  FUN_006fab90(void);

__declspec(naked) void FUN_004e5a10(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_007da6ac]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+0x8]
        mov     esi, dword ptr [edi+0x4]
        mov     ebx, ecx
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_4e5a50
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5ba7
        push    edi
        mov     ecx, eax
        call    FUN_004e4c70
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5a50:
        mov     eax, dword ptr [g_007b97fc]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_4e5a82
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5ba7
        push    edi
        mov     ecx, eax
        call    FUN_004e4cf0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5a82:
        mov     eax, dword ptr [g_007da6a8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_4e5ab4
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5ba7
        push    edi
        mov     ecx, eax
        call    FUN_004e4cb0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5ab4:
        mov     eax, dword ptr [g_007da69c]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_4e5ae6
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5ba7
        push    edi
        mov     ecx, eax
        call    FUN_004e5160
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5ae6:
        mov     eax, dword ptr [g_007da6a0]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_4e5b18
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5ba7
        push    edi
        mov     ecx, eax
        call    FUN_004e50e0
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5b18:
        mov     eax, dword ptr [g_007b96cc]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_4e5b46
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5ba7
        push    edi
        mov     ecx, eax
        call    FUN_004e5220
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5b46:
        mov     eax, dword ptr [g_007b96b4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_4e5b95
        push    0x1c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5b81
        push    edi
        mov     ecx, eax
        call    FUN_004e52e0
        mov     esi, eax
        push    esi
        lea     ecx, [ebx+0x4]
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5b81:
        xor     esi, esi
        push    esi
        lea     ecx, [ebx+0x4]
        call    FUN_004179b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
    L_4e5b95:
        push    0x774080
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4e5ba7
        int     3
    L_4e5ba7:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        pop     ebp
        ret     0x4
    }
}
