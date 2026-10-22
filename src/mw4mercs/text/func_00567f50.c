// 0x00567F50: FUN_00567f50 - entropy mood set function
// __cdecl, no params
// Returns int

__declspec(naked) int __cdecl func_00567f50(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db2a(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064db02(void);
extern int DAT_007dde2c;
extern int DAT_0077f67c;
extern void __cdecl FUN_100566657(void);
extern void __cdecl FUN_006fab71(void);
extern int DAT_0077f680;
extern void __cdecl FUN_100566626(void);
extern void __cdecl FUN_006fab40(void);
extern void __cdecl FUN_100566b32(void);
extern void __cdecl FUN_100566b61(void);
extern void __cdecl FUN_100567d08(void);
extern void __cdecl FUN_1005668ea(void);
extern void __cdecl FUN_1005665cd(void);
extern void __cdecl FUN_006faae7(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_100415102(void);
extern void __cdecl FUN_100566594(void);
extern void __cdecl FUN_006faaae(void);
extern void __cdecl FUN_100566569(void);
extern void __cdecl FUN_006faa83(void);
__asm {
push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [DAT_00805918]
        movsx ecx, byte ptr [eax + 1]
        inc eax
        inc eax
        push esi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db2a
        mov eax, dword ptr [DAT_0080592c]
        mov esi, dword ptr [eax]
        sub eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx edx, byte ptr [eax]
        inc eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db02
        mov eax, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [eax]
        sub eax, 4
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [DAT_0080592c], eax
        fild dword ptr [ebp - 4]
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        fstp dword ptr [ebp - 4]
        jz check_type
        fld dword ptr [ebp - 4]
        fcomp dword ptr [DAT_0077f67c]
        fnstsw ax
        test ah, 1
        jz check_high
        push 0x77f8c4
        call FUN_100566657
        push eax
        call FUN_006fab71
        add esp, 8
        test eax, eax
        jz check_high
        int 3
check_high:
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz check_type
        fld dword ptr [ebp - 4]
        fcomp dword ptr [DAT_0077f680]
        fnstsw ax
        test ah, 0x41
        jnz check_type
        push 0x77f8a8
        call FUN_100566626
        push eax
        call FUN_006fab40
        add esp, 8
        test eax, eax
        jz check_type
        int 3
check_type:
        push esi
        call FUN_100566b32
        add esp, 4
        cmp al, 1
        jnz get_object
        mov edx, dword ptr [ebp - 4]
        push edx
        push esi
        call FUN_100566b61
        add esp, 4
        push eax
        call FUN_100567d08
        add esp, 8
        jmp epilogue
get_object:
        push esi
        call FUN_1005668ea
        mov esi, eax
        mov al, byte ptr [DAT_007dde2c]
        add esp, 4
        test al, al
        jz check_null
        cmp esi, -1
        jnz check_null
        push 0x77f880
        call FUN_1005665cd
        push eax
        call FUN_006faae7
        add esp, 8
        test eax, eax
        jz check_null_entry
        int 3
        jmp check_null_entry
check_null:
        test esi, esi
        jz epilogue
check_null_entry:
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz set_mood
        mov eax, dword ptr [DAT_007f24d8]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_100415102
        test al, al
        jnz check_dead
        push 0x77f880
        call FUN_100566594
        push eax
        call FUN_006faaae
        add esp, 8
        test eax, eax
        jz check_dead
        int 3
check_dead:
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz set_mood
        mov al, byte ptr [esi + 0x2f9]
        test al, al
        jz set_mood
        push 0x77f858
        call FUN_100566569
        push eax
        call FUN_006faa83
        add esp, 8
        test eax, eax
        jz set_mood
        int 3
set_mood:
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [esi + 0x1b8], edx
epilogue:
        mov eax, dword ptr [DAT_00805918]
        movsx ecx, byte ptr [eax]
        inc eax
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }


}
