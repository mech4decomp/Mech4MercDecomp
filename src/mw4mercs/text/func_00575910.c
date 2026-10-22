/* FUN_00575910 (0x00575910, 392 bytes) */

#ifdef __cplusplus
extern "C" {
#endif

void __declspec(naked) FUN_00575910(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db28(void);
extern int DAT_0080592c;
extern void __cdecl FUN_100566c03(void);
extern void __cdecl FUN_0064daf5(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_10056665b(void);
extern void __cdecl FUN_006fab75(void);
extern void __cdecl FUN_100566632(void);
extern void __cdecl FUN_006fab4c(void);
extern void __cdecl FUN_100566bcf(void);
extern void __cdecl FUN_0064e53c(void);
extern void __cdecl FUN_1005665fe(void);
extern void __cdecl FUN_006fab18(void);
extern void __cdecl FUN_0064e518(void);
extern void __cdecl FUN_0064e4ac(void);
extern void __cdecl FUN_0064de23(void);
extern void __cdecl FUN_0064de58(void);
extern void __cdecl FUN_0065e343(void);
extern void __cdecl FUN_0064dd15(void);
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
        mov     ecx, [eax]
        sub     eax, 0x4
        push    ecx
        mov dword ptr [DAT_0080592c], eax
        call FUN_100566c03
        mov     esi, eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        add     esp, 0x4
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064daf5
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      after_assert
        cmp     edi, 0xf9f
        jg      check_upper
        push    0x780f20
        call FUN_10056665b
        push    eax
        call FUN_006fab75
        add     esp, 0x8
        test    eax, eax
        jz      check_upper
        int     0x3
    check_upper:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      after_assert
        cmp     edi, 0xfa5
        jl      after_assert
        push    0x780f20
        call FUN_100566632
        push    eax
        call FUN_006fab4c
        add     esp, 0x8
        test    eax, eax
        jz      after_assert
        int     0x3
    after_assert:
        call FUN_100566bcf
        mov     ebx, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      check_group
        push    esi
        mov     ecx, ebx
        call FUN_0064e53c
        cmp     al, 0x1
        jz      check_group
        push    0x780eec
        call FUN_1005665fe
        push    eax
        call FUN_006fab18
        add     esp, 0x8
        test    eax, eax
        jz      check_group
        int     0x3
    check_group:
        push    esi
        mov     ecx, ebx
        call FUN_0064e518
        test    al, al
        jz      done
        push    esi
        mov     ecx, ebx
        call FUN_0064e4ac
        mov     esi, eax
        mov     ecx, esi
        call FUN_0064de23
        test    al, al
        jz      do_set
        mov     ecx, esi
        call FUN_0064de58
        mov     edx, [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        cmp     eax, edi
        jz      done
    do_set:
        lea     eax, [ebp - 0x4]
        push    edi
        push    eax
        call FUN_0065e343
        add     esp, 0x8
        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, esi
        call FUN_0064dd15
        mov     ecx, [ebp - 0x4]
        mov     edx, ecx
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     done
        mov     eax, ecx
        and     eax, 0x2
        cmp     al, 0x2
        jnz     bit2_not_set
        and     ecx, 0xfffffffc
        mov     [ebp - 0x4], ecx
        jz      done
        mov     edx, [ecx]
        push    0x3
        call    dword ptr [edx + 0x18]
        jmp     done
    bit2_not_set:
        and     ecx, 0xfffffffc
        mov     [ebp - 0x4], ecx
        jz      done
        mov     eax, [ecx]
        push    0x1
        call    dword ptr [eax + 0x18]
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
