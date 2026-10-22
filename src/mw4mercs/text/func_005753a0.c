/* FUN_005753a0 (0x005753A0, 221 bytes) */

#ifdef __cplusplus
extern "C" {
#endif

void __declspec(naked) FUN_005753a0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db2a(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064db02(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_100566669(void);
extern void __cdecl FUN_006fab83(void);
extern void __cdecl FUN_100566b6f(void);
extern void __cdecl FUN_100566b9e(void);
extern void __cdecl FUN_100575195(void);
extern void __cdecl FUN_10056692a(void);
extern void __cdecl FUN_005dd158(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        inc     eax
        push    esi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db2a
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db02
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        mov     [ebp - 0x4], ecx
        jz      do_conv
        test    ecx, ecx
        jge     do_conv
        push    0x780e6c
        call FUN_100566669
        push    eax
        call FUN_006fab83
        add     esp, 0x8
        test    eax, eax
        jz      do_conv
        int     0x3
    do_conv:
        fild    dword ptr [ebp - 0x4]
        push    esi
        fstp    dword ptr [ebp - 0x4]
        call FUN_100566b6f
        add     esp, 0x4
        cmp     al, 0x1
        jnz     try_other
        mov     eax, [ebp - 0x4]
        push    eax
        push    esi
        call FUN_100566b9e
        add     esp, 0x4
        push    eax
        call FUN_100575195
        add     esp, 0x8
        jmp     done
    try_other:
        push    esi
        call FUN_10056692a
        add     esp, 0x4
        test    eax, eax
        jz      done
        mov     edx, [ebp - 0x4]
        push    edx
        mov     ecx, eax
        call FUN_005dd158
    done:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}

#ifdef __cplusplus
}
#endif
