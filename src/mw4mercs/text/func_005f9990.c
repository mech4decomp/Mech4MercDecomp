/*
 * FUN_005f9990 (280 B) — __thiscall, one stack arg (param_1). Sibling of
 * FUN_005f97b0: dispatches on the same global flag chain (FUN_00415230 with
 * DAT_007f25a8 / DAT_007f2140 / ...), either calling FUN_004154d0(param_1+0x3f8)
 * or zeroing one of the this+0x3d4..0x3ec slots.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f25a8;
extern int DAT_007f2140;
extern int DAT_007f2124;
extern int DAT_007f20a8;
extern int DAT_007f2120;
extern int DAT_007f1fa8;
extern int DAT_007f1fa4;
extern int DAT_007f1ff4;

extern void FUN_00415230(void);
extern void FUN_004154d0(void);

__declspec(naked) void FUN_005f9990(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007f25a8]
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    esi
        mov     esi, dword ptr [ebx+4]
        push    edi
        mov     edi, ecx
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_99c1
        add     edi, 0x3f8
        push    edi
        mov     ecx, ebx
        call    FUN_004154d0
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L_99c1:
        mov     eax, dword ptr [DAT_007f2140]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_99e2
        mov     dword ptr [edi+0x3d4], 0
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L_99e2:
        mov     eax, dword ptr [DAT_007f2124]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9a03
        mov     dword ptr [edi+0x3d8], 0
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L_9a03:
        mov     eax, dword ptr [DAT_007f20a8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9a24
        mov     dword ptr [edi+0x3dc], 0
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L_9a24:
        mov     eax, dword ptr [DAT_007f2120]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9a45
        mov     dword ptr [edi+0x3e0], 0
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L_9a45:
        mov     eax, dword ptr [DAT_007f1fa8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9a66
        mov     dword ptr [edi+0x3e4], 0
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L_9a66:
        mov     eax, dword ptr [DAT_007f1fa4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9a87
        mov     dword ptr [edi+0x3e8], 0
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    L_9a87:
        mov     eax, dword ptr [DAT_007f1ff4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9aa2
        mov     dword ptr [edi+0x3ec], 0
    L_9aa2:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
