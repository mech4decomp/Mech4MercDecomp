/*
 * FUN_005AD2F0 (268 B) — global init routine, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084D0(unsigned int size);
extern void __cdecl FUN_00415180(void *param);
extern void __cdecl FUN_0041FC80(void *param);
extern void *__cdecl FUN_00501A20(void);
extern void *__cdecl FUN_00501500(void);
extern void __cdecl FUN_005016B0(void *param);

__declspec(naked) void __stdcall FUN_005AD2F0(void)
{
    

extern int DAT_007b8c10;
extern int DAT_007f20d0;
extern int DAT_007f20d4;
extern int DAT_007dc690;
extern int DAT_007f20d8;
__asm {
push    ebx
        push    esi
        push    0x34
        call    FUN_004084D0
        mov     esi, eax
        xor     ebx, ebx
        add     esp, 0x4
        cmp     esi, ebx
        jz      L34E
        mov eax, dword ptr [DAT_007b8c10]
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        lea     edi, [esi + 0x18]
        mov     dword ptr [esi], 0x76cd9c
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x10], ebx
        call    FUN_0041FC80
        mov     dword ptr [edi], 0x7859f0
        mov     dword ptr [esi], 0x7859ec
        mov     byte ptr [esi + 0x20], bl
        mov     byte ptr [esi + 0x21], bl
        mov     byte ptr [esi + 0x22], 0x1
        mov dword ptr [DAT_007f20d0], esi
        pop     edi
        jmp     L354
L34E:
        mov dword ptr [DAT_007f20d0], ebx
L354:
        push    0xa4
        call    FUN_004084D0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L3AC
        mov ecx, dword ptr [DAT_007f20d4]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    ebx
        push    0x501eb0
        push    ecx
        push    0x6781e0
        push    0x5ad490
        push    ebx
        push    ebx
        push    edx
        push    0x7859d0
        push    0x49b
        mov     ecx, eax
        call    FUN_00501A20
        mov dword ptr [DAT_007f20d8], eax
        jmp     L3B2
L3AC:
        mov dword ptr [DAT_007f20d8], ebx
L3B2:
        push    0x20
        call    FUN_004084D0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L3E9
        push    0xe0
        push    0x49a
        push    0x773250
        push    0x1
        mov     ecx, eax
        call    FUN_00501500
        push    eax
        mov eax, dword ptr [DAT_007f20d8]
        lea     ecx, [eax + 0x44]
        call    FUN_005016B0
        pop     esi
        pop     ebx
        ret
L3E9:
        xor     eax, eax
        push    eax
        mov eax, dword ptr [DAT_007f20d8]
        lea     ecx, [eax + 0x44]
        call    FUN_005016B0
        pop     esi
        pop     ebx
        ret
    }


}
