/* FUN_00571f30 — 247 bytes */
__declspec(naked) unsigned int __stdcall FUN_00571f30(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db29(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064db01(void);
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007dde2c;
extern void __cdecl FUN_100566649(void);
extern void __cdecl FUN_006fab63(void);
extern void __cdecl FUN_100566623(void);
extern void __cdecl FUN_006fab3d(void);
extern void __cdecl FUN_0060ff5f(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db29
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db01
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, [eax]
        mov esi, dword ptr [DAT_007dab40]
        sub     eax, 4
        cmp     ecx, 1
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov dword ptr [DAT_0080592c], eax
        setz    al
        xor     edx, esi
        mov     esi, [edx + 0x20]
        mov     [ebp - 4], al
        mov al, byte ptr [DAT_007dde2c]
        xor     esi, 0x85739531
        test    al, al
        jz      skip_asserts

        test    edi, edi
        jge     assert1_done
        push    0x7808F8
        call FUN_100566649
        push    eax
        call FUN_006fab63
        add     esp, 8
        test    eax, eax
        jz      assert1_done
        int     3

assert1_done:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      skip_asserts

        cmp     edi, 0x20
        jl      skip_asserts
        push    0x7808D0
        call FUN_100566623
        push    eax
        call FUN_006fab3d
        add     esp, 8
        test    eax, eax
        jz      skip_asserts
        int     3

skip_asserts:
        mov     eax, [ebp - 4]
        lea     ecx, [edi + edi * 2]
        shl     ecx, 4
        push    eax
        lea     ecx, [ecx + esi + 0x1BB8]
        call FUN_0060ff5f
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        pop     edi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], edx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
