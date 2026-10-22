// 0x00568100: FUN_00568100 - object distance/selection function
// __cdecl, 2 params (int param_1, float param_2)
// Returns byte

__declspec(naked) unsigned char __cdecl func_00568100(int param_1, float param_2)
{
    

extern void __cdecl FUN_0058051f(void);
extern void __cdecl FUN_100566ebe(void);
extern void __cdecl FUN_00580543(void);
extern void __cdecl FUN_005fb85e(void);
extern int DAT_0076d598;
extern void __cdecl FUN_10040ca00(void);
extern int DAT_0076c5b0;
extern void __cdecl FUN_005804e2(void);
extern void __cdecl FUN_005dd5e9(void);
extern void __cdecl FUN_10040836b(void);
__asm {
mov eax, dword ptr [esp + 4]
        sub esp, 0x34
        push ebx
        mov ebx, dword ptr [eax + 0x170]
        test ebx, ebx
        push ebp
        push esi
        jnz have_obj
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x34
        ret
have_obj:
        lea ecx, [esp + 0xf]
        push ecx
        lea ecx, [esp + 0x14]
        call FUN_0058051f
        mov eax, dword ptr [esp + 0x48]
        push 0
        lea edx, [esp + 0x14]
        push edx
        push eax
        call FUN_100566ebe
        mov eax, dword ptr [esp + 0x20]
        mov esi, dword ptr [esp + 0x1c]
        mov ecx, eax
        sub ecx, esi
        add esp, 0xc
        test ecx, 0xfffffffc
        jnz loop_setup
        mov edx, dword ptr [esp + 0x18]
        sub edx, esi
        sar edx, 2
        push edx
        push esi
        lea ecx, [esp + 0x20]
        call FUN_00580543
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x34
        ret
loop_setup:
        cmp esi, eax
        mov dword ptr [esp + 0x48], 0xbf800000
        mov ebp, eax
        jz check_result
        push edi
loop_start:
        mov edi, dword ptr [esi]
        mov ecx, edi
        call FUN_005fb85e
        fcomp dword ptr [DAT_0076d598]
        fnstsw ax
        test ah, 0x40
        jnz loop_next
        mov eax, dword ptr [edi + 0xd8]
        fld dword ptr [eax + 0x8c]
        mov ecx, dword ptr [eax + 0x9c]
        mov edx, dword ptr [eax + 0xac]
        add eax, 0x80
        mov eax, dword ptr [ebx + 0xd8]
        fld dword ptr [eax + 0x8c]
        add eax, 0x80
        fsub st(0), st(1)
        mov dword ptr [esp + 0x30], ecx
        mov ecx, dword ptr [eax + 0x1c]
        mov dword ptr [esp + 0x24], ecx
        fstp dword ptr [esp + 0x38]
        mov dword ptr [esp + 0x34], edx
        mov edx, dword ptr [eax + 0x2c]
        fstp st(0)
        mov dword ptr [esp + 0x28], edx
        fld dword ptr [esp + 0x24]
        lea ecx, [esp + 0x38]
        fsub dword ptr [esp + 0x30]
        fstp dword ptr [esp + 0x3c]
        fld dword ptr [esp + 0x28]
        fsub dword ptr [esp + 0x34]
        fstp dword ptr [esp + 0x40]
        call FUN_10040ca00
        fld dword ptr [esp + 0x4c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw ax
        test ah, 1
        jnz update_best
        fcom dword ptr [esp + 0x4c]
        fnstsw ax
        test ah, 1
        jz loop_next_no_pop
update_best:
        fstp dword ptr [esp + 0x4c]
        mov ebp, esi
        jmp loop_next
loop_next_no_pop:
        fstp st(0)
loop_next:
        mov eax, dword ptr [esp + 0x18]
        add esi, 4
        cmp esi, eax
        jnz loop_start
        mov esi, dword ptr [esp + 0x14]
        pop edi
check_result:
        cmp ebp, eax
        jnz found_best
        mov eax, dword ptr [esp + 0x18]
        sub eax, esi
        sar eax, 2
        push eax
        push esi
        call FUN_005804e2
        add esp, 8
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x34
        ret
found_best:
        mov ecx, dword ptr [ebp]
        push ecx
        mov ecx, dword ptr [esp + 0x48]
        call FUN_005dd5e9
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        jz done
        push eax
        call FUN_10040836b
        add esp, 4
done:
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x34
        ret
    }


}
