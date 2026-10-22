/*
 * FUN_005f97b0 (476 B) — __thiscall, one stack arg (param_1). Sibling of
 * FUN_005f95f0: runs the same flag/string filter chain (FUN_00415230 with
 * DAT_007f1f84 etc.) against the entry, then stores param_1 into one of the
 * this+0x3d4..0x3ec slots depending on which global flag is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007f1f84;
extern int DAT_007f206c;
extern int DAT_007f2120;
extern int DAT_007f2124;
extern int DAT_007f20a8;
extern int DAT_007f1fa8;
extern int DAT_007f1fa4;
extern int DAT_007f1ff4;
extern int DAT_007f2140;

extern void FUN_00415230(void);

__declspec(naked) void FUN_005f97b0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007f1f84]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx+4]
        push    eax
        call    FUN_00415230
        test    al, al
        mov     ebp, dword ptr [esp+0x14]
        jz      L_98b7
        mov     eax, dword ptr [ebx+0x78]
        lea     ecx, [ebx+0x78]
        call    dword ptr [eax+4]
        mov     esi, dword ptr [ebp+4]
        mov     edi, eax
        mov     eax, dword ptr [DAT_007f206c]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_97fd
        mov     al, byte ptr [edi+0x640]
        test    al, al
        jz      L_9985
    L_97fd:
        mov     eax, dword ptr [DAT_007f2120]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_981c
        mov     al, byte ptr [edi+0x641]
        test    al, al
        jz      L_9985
    L_981c:
        mov     eax, dword ptr [DAT_007f2124]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_983b
        mov     al, byte ptr [edi+0x642]
        test    al, al
        jz      L_9985
    L_983b:
        mov     eax, dword ptr [DAT_007f20a8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_985a
        mov     al, byte ptr [edi+0x645]
        test    al, al
        jz      L_9985
    L_985a:
        mov     eax, dword ptr [DAT_007f1fa8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9879
        mov     al, byte ptr [edi+0x668]
        test    al, al
        jz      L_9985
    L_9879:
        mov     eax, dword ptr [DAT_007f1fa4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9898
        mov     al, byte ptr [edi+0x669]
        test    al, al
        jz      L_9985
    L_9898:
        mov     eax, dword ptr [DAT_007f1ff4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_98b7
        mov     al, byte ptr [edi+0x66a]
        test    al, al
        jz      L_9985
    L_98b7:
        mov     eax, dword ptr [DAT_007f2140]
        mov     esi, dword ptr [ebp+4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_98d8
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x3d4], ebp
        pop     ebp
        pop     ebx
        ret     4
    L_98d8:
        mov     eax, dword ptr [DAT_007f2124]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_98f6
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x3d8], ebp
        pop     ebp
        pop     ebx
        ret     4
    L_98f6:
        mov     eax, dword ptr [DAT_007f20a8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9914
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x3dc], ebp
        pop     ebp
        pop     ebx
        ret     4
    L_9914:
        mov     eax, dword ptr [DAT_007f2120]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9932
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x3e0], ebp
        pop     ebp
        pop     ebx
        ret     4
    L_9932:
        mov     eax, dword ptr [DAT_007f1fa8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9950
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x3e4], ebp
        pop     ebp
        pop     ebx
        ret     4
    L_9950:
        mov     eax, dword ptr [DAT_007f1fa4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_996e
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x3e8], ebp
        pop     ebp
        pop     ebx
        ret     4
    L_996e:
        mov     eax, dword ptr [DAT_007f1ff4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9985
        mov     dword ptr [ebx+0x3ec], ebp
    L_9985:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
