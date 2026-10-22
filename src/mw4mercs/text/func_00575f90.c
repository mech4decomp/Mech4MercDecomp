/* FUN_00575f90 (0x00575F90, 392 bytes) */

#ifdef __cplusplus
extern "C" {
#endif

void __declspec(naked) FUN_00575f90(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db27(void);
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern void __cdecl FUN_100566bb9(void);
extern void __cdecl FUN_100566688(void);
extern void __cdecl FUN_006faba2(void);
extern void __cdecl FUN_100566bb4(void);
extern void __cdecl FUN_005804f4(void);
extern void __cdecl FUN_100566b98(void);
extern void __cdecl FUN_100566e4f(void);
extern int DAT_00805928;
extern void __cdecl FUN_100562f85(void);
extern int DAT_0080d9b0;
extern void __cdecl FUN_00580531(void);
extern void __cdecl FUN_100566b0c(void);
extern void __cdecl FUN_0063ac36(void);
extern void __cdecl FUN_100562f0d(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    ebx
        inc     eax
        push    esi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db27
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      after_assert1
        push    esi
        call FUN_100566bb9
        add     esp, 0x4
        cmp     al, 0x1
        jz      after_assert1
        push    0x7810a8
        call FUN_100566688
        push    eax
        call FUN_006faba2
        add     esp, 0x8
        test    eax, eax
        jz      after_assert1
        int     0x3
    after_assert1:
        push    esi
        call FUN_100566bb4
        add     esp, 0x4
        cmp     al, 0x1
        jnz     not_group
        lea     edx, [ebp - 0x8]
        push    edx
        lea     eax, [ebp - 0x1]
        push    eax
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], 0x0
        mov     dword ptr [ebp - 0x10], 0x0
        mov     dword ptr [ebp - 0x8], 0x0
        call FUN_005804f4
        push    0x0
        lea     ecx, [ebp - 0x14]
        push    ecx
        push    esi
        call FUN_100566b98
        add     esp, 0x4
        push    eax
        call FUN_100566e4f
        mov     ebx, [ebp - 0x10]
        mov     ecx, [ebp - 0x14]
        mov esi, dword ptr [DAT_0080592c]
        mov edx, dword ptr [DAT_00805928]
        sub     ebx, ecx
        and     ebx, 0xfffffffc
        add     esp, 0xc
        neg     ebx
        sbb     bl, bl
        add     esi, 0x4
        add     edx, 0xa000
        inc     bl
        cmp     esi, edx
        mov dword ptr [DAT_0080592c], esi
        jc      no_grow1
        push    0x0
        call FUN_100562f85
        add     esp, 0x4
    no_grow1:
        xor     eax, eax
        test    bl, bl
        setnz   al
        mov     [esi], eax
        mov     eax, [ebp - 0x14]
        mov     ecx, [ebp - 0xc]
        mov esi, dword ptr [DAT_0080d9b0]
        sub     ecx, eax
        sar     ecx, 0x2
        push    ecx
        push    eax
        call FUN_00580531
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        add     esp, 0x8
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov     eax, esi
        pop     esi
        mov dword ptr [DAT_00805908], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    not_group:
        push    esi
        call FUN_100566b0c
        push    eax
        call FUN_0063ac36
        mov esi, dword ptr [DAT_0080592c]
        mov     bl, al
        mov eax, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     eax, 0xa000
        add     esp, 0x8
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      no_grow2
        push    0x0
        call FUN_100562f0d
        add     esp, 0x4
    no_grow2:
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        xor     ecx, ecx
        test    bl, bl
        setnz   cl
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], edx
        mov     [esi], ecx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}

#ifdef __cplusplus
}
#endif
