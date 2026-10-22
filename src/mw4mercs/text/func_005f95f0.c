/*
 * FUN_005f95f0 (436 B) — __thiscall. Iterates a linked list of weapon/mech
 * entries (head at this+0x34c), filtering by a set of global string/flag
 * checks (FUN_00415230 with DAT_007f1f84 etc.), dispatching virtual calls
 * (this+0x2c / this+0x100 / entry+0xa0), and finally handling a secondary
 * list at this+0x3d4.
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
extern int DAT_007f25a8;

extern void FUN_00415230(void);
extern void FUN_004179b0(void);
extern void FUN_005faf20(void);
extern void FUN_005b9d60(void);

__declspec(naked) void FUN_005f95f0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     eax, dword ptr [ebp+0x34c]
        push    edi
        mov     dword ptr [esp+0x10], 0
    L_9607:
        test    eax, eax
        jz      L_977d
        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        mov     eax, dword ptr [eax+4]
        mov     dword ptr [esp+0x1c], eax
        jz      L_977d
        mov     eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [ebp+4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_971b
        mov     edx, dword ptr [ebp+0x78]
        lea     ecx, [ebp+0x78]
        call    dword ptr [edx+4]
        mov     esi, dword ptr [ebx+4]
        mov     edi, eax
        mov     eax, dword ptr [DAT_007f206c]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9663
        mov     al, byte ptr [edi+0x640]
        test    al, al
        jz      L_9709
    L_9663:
        mov     eax, dword ptr [DAT_007f2120]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_9682
        mov     al, byte ptr [edi+0x641]
        test    al, al
        jz      L_9709
    L_9682:
        mov     eax, dword ptr [DAT_007f2124]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_969d
        mov     al, byte ptr [edi+0x642]
        test    al, al
        jz      L_9709
    L_969d:
        mov     eax, dword ptr [DAT_007f20a8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_96b8
        mov     al, byte ptr [edi+0x645]
        test    al, al
        jz      L_9709
    L_96b8:
        mov     eax, dword ptr [DAT_007f1fa8]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_96d3
        mov     al, byte ptr [edi+0x668]
        test    al, al
        jz      L_9709
    L_96d3:
        mov     eax, dword ptr [DAT_007f1fa4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_96ee
        mov     al, byte ptr [edi+0x669]
        test    al, al
        jz      L_9709
    L_96ee:
        mov     eax, dword ptr [DAT_007f1ff4]
        push    eax
        mov     ecx, esi
        call    FUN_00415230
        test    al, al
        jz      L_971b
        mov     al, byte ptr [edi+0x66a]
        test    al, al
        jnz     L_971b
    L_9709:
        mov     eax, dword ptr [ebp]
        push    ebx
        mov     ecx, ebp
        call    dword ptr [eax+0x2c]
        mov     eax, dword ptr [esp+0x1c]
        jmp     L_9607
    L_971b:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0xa0]
        test    al, al
        jz      L_976b
        mov     eax, dword ptr [DAT_007f25a8]
        mov     ecx, dword ptr [ebx+4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_9756
        push    ebx
        lea     ecx, [ebp+0x3f8]
        call    FUN_004179b0
        mov     eax, dword ptr [esp+0x10]
        mov     dword ptr [ebx+0x184], eax
        inc     eax
        mov     dword ptr [esp+0x10], eax
    L_9756:
        mov     eax, dword ptr [ebp]
        push    ebx
        mov     ecx, ebp
        call    dword ptr [eax+0x100]
        mov     eax, dword ptr [esp+0x1c]
        jmp     L_9607
    L_976b:
        mov     edx, dword ptr [ebp]
        push    ebx
        mov     ecx, ebp
        call    dword ptr [edx+0x2c]
        mov     eax, dword ptr [esp+0x1c]
        jmp     L_9607
    L_977d:
        mov     eax, dword ptr [ebp+0x3d4]
        test    eax, eax
        jz      L_979c
        mov     ecx, ebp
        call    FUN_005faf20
        mov     ecx, dword ptr [ebp+0x3d4]
        push    eax
        push    0
        call    FUN_005b9d60
    L_979c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
