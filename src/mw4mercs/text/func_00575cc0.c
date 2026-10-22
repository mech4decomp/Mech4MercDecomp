/* FUN_00575cc0 (0x00575CC0, 422 bytes) */

#ifdef __cplusplus
extern "C" {
#endif

void __declspec(naked) FUN_00575cc0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db28(void);
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern void __cdecl FUN_100566bba(void);
extern void __cdecl FUN_100566689(void);
extern void __cdecl FUN_006faba3(void);
extern void __cdecl FUN_100566bd5(void);
extern void __cdecl FUN_0064dac7(void);
extern int DAT_0080d964;
extern void __cdecl FUN_100566b22(void);
extern void __cdecl FUN_1005665f1(void);
extern void __cdecl FUN_006fab0b(void);
extern void __cdecl FUN_100566b8e(void);
extern void __cdecl FUN_0064e4fb(void);
extern void __cdecl FUN_1005665bd(void);
extern void __cdecl FUN_006faad7(void);
extern void __cdecl FUN_0064e4d7(void);
extern void __cdecl FUN_0064e46b(void);
extern void __cdecl FUN_0064de24(void);
extern void __cdecl FUN_0064e44d(void);
extern void __cdecl FUN_10056655f(void);
extern void __cdecl FUN_006faa79(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db28
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      after_assert1
        push    esi
        call FUN_100566bba
        add     esp, 0x4
        cmp     al, 0x1
        jz      after_assert1
        push    0x78103c
        call FUN_100566689
        push    eax
        call FUN_006faba3
        add     esp, 0x8
        test    eax, eax
        jz      after_assert1
        int     0x3
    after_assert1:
        push    esi
        call FUN_100566bd5
        mov     ebx, eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        add     esp, 0x4
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064dac7
        mov ecx, dword ptr [DAT_0080592c]
        mov     eax, [ecx]
        sub     ecx, 0x4
        cmp     eax, -0x1
        mov dword ptr [DAT_0080592c], ecx
        mov     [ebp - 0x4], eax
        jnz     check_assert2
        mov eax, dword ptr [DAT_0080d964]
        test    eax, eax
        jz      done
        mov     eax, [eax + 0x170]
        test    eax, eax
        jz      done
        mov     eax, [eax + 0x30]
        cmp     eax, -0x1
        mov     [ebp - 0x4], eax
        jz      done
    check_assert2:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      after_assert3
        mov     edx, [ebp - 0x4]
        push    edx
        call FUN_100566b22
        add     esp, 0x4
        test    al, al
        jz      after_assert3
        push    0x780fe4
        call FUN_1005665f1
        push    eax
        call FUN_006fab0b
        add     esp, 0x8
        test    eax, eax
        jz      after_assert3
        int     0x3
    after_assert3:
        call FUN_100566b8e
        mov     edi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      check_group
        push    ebx
        mov     ecx, edi
        call FUN_0064e4fb
        cmp     al, 0x1
        jz      check_group
        push    0x780fa4
        call FUN_1005665bd
        push    eax
        call FUN_006faad7
        add     esp, 0x8
        test    eax, eax
        jz      check_group
        int     0x3
    check_group:
        push    ebx
        mov     ecx, edi
        call FUN_0064e4d7
        test    al, al
        jz      done
        push    ebx
        mov     ecx, edi
        call FUN_0064e46b
        mov     ecx, eax
        call FUN_0064de24
        mov     esi, eax
        test    esi, esi
        jz      no_ai
        mov     eax, [ebp - 0x4]
        mov     edx, [esi]
        push    eax
        push    ebx
        mov     ecx, edi
        mov     [ebp - 0x4], edx
        call FUN_0064e44d
        mov     edx, [ebp - 0x4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        jmp     done
    no_ai:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      done
        push    0x780f60
        call FUN_10056655f
        push    eax
        call FUN_006faa79
        add     esp, 0x8
        test    eax, eax
        jz      done
        int     0x3
    done:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}

#ifdef __cplusplus
}
#endif
