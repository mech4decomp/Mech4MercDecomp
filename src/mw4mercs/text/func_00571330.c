/* FUN_00571330 — 226 bytes */
__declspec(naked) unsigned int __stdcall FUN_00571330(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db2a(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064db02(void);
extern int DAT_007f2114;
extern void __cdecl FUN_005b801a(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fcaab(void);
extern int DAT_007dde2c;
extern void __cdecl FUN_005b7cf9(void);
extern void __cdecl FUN_006fab4b(void);
extern void __cdecl FUN_005b7e03(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        push    esi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db2a
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db02
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, [eax]
        sub     eax, 4
        cmp     esi, -2
        mov     [ebp - 4], ecx
        mov dword ptr [DAT_0080592c], eax
        jnz     case_not_minus2
        mov ecx, dword ptr [DAT_007f2114]
        push    0
        push    0
        push    0
        call FUN_005b801a
        jmp     done

case_not_minus2:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call FUN_1004fcaab
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      skip_assert
        mov     ecx, esi
        call FUN_005b7cf9
        test    al, al
        jnz     skip_assert
        push    0x7806BC
        call FUN_006fab4b
        add     esp, 4
        test    eax, eax
        jz      skip_assert
        int     3

skip_assert:
        fild    dword ptr [ebp - 4]
        sub     esp, 8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call FUN_005b7e03

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
