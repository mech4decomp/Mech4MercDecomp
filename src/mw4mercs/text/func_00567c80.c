// 0x00567C80: FUN_00567c80 - vehicle lookup function
// __cdecl, no params
// Returns int

__declspec(naked) int __cdecl func_00567c80(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db12(void);
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern void __cdecl FUN_006fab9a(void);
extern void __cdecl FUN_006fab7a(void);
extern void __cdecl FUN_10041fceb(void);
extern int DAT_00805928;
extern void __cdecl FUN_100562f93(void);
extern int DAT_0080d9bc;
extern void __cdecl FUN_10041fc82(void);
extern void __cdecl FUN_100562f33(void);
__asm {
push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov eax, dword ptr [DAT_00805918]
        movsx edx, byte ptr [eax + 1]
        push ebx
        push esi
        mov esi, dword ptr [ecx + 0x10]
        xor esi, 0x85739531
        inc eax
        inc eax
        push edi
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db12
        mov eax, dword ptr [DAT_0080592c]
        mov edi, dword ptr [eax]
        sub eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        mov ebx, edi
        jz check_loop
        test edi, edi
        jge check_high
        push 0x77f830
        call FUN_006fab9a
        add esp, 4
        test eax, eax
        jz check_high
        int 3
check_high:
        mov al, byte ptr [DAT_007dde2c]
        test al, al
        jz check_loop
        cmp edi, 0x20
        jl check_loop
        push 0x77f808
        call FUN_006fab7a
        add esp, 4
        test eax, eax
        jz check_loop
        int 3
check_loop:
        mov eax, dword ptr [esi + 0x2c]
        xor edi, edi
        test eax, eax
        mov dword ptr [ebp - 4], eax
        jle alloc_stack
        mov esi, dword ptr [esi + 0x28]
loop_start:
        mov ecx, dword ptr [esi + 0x14]
        call FUN_10041fceb
        test eax, eax
        jz loop_next
        test ebx, ebx
        jz found_vehicle
loop_next:
        mov eax, dword ptr [ebp - 4]
        dec ebx
        inc edi
        add esi, 0x1c
        cmp edi, eax
        jl loop_start
alloc_stack:
        mov esi, dword ptr [DAT_0080592c]
        mov eax, dword ptr [DAT_00805928]
        add esi, 4
        add eax, 0xa000
        cmp esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc store_default
        push 0
        call FUN_100562f93
        add esp, 4
store_default:
        mov eax, dword ptr [DAT_00805918]
        movsx ecx, byte ptr [eax]
        pop edi
        inc eax
        mov dword ptr [esi], 0xfffffffe
        pop esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9bc]
        mov dword ptr [DAT_00805908], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
found_vehicle:
        mov ecx, dword ptr [esi + 0x14]
        call FUN_10041fc82
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        mov eax, dword ptr [eax + 0x170]
        mov edi, dword ptr [eax + 0x30]
        add esi, 4
        add ecx, 0xa000
        cmp esi, ecx
        mov dword ptr [DAT_0080592c], esi
        jc store_vehicle
        push 0
        call FUN_100562f33
        add esp, 4
store_vehicle:
        mov eax, dword ptr [DAT_00805918]
        movsx edx, byte ptr [eax]
        mov dword ptr [esi], edi
        pop edi
        inc eax
        pop esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9bc]
        mov dword ptr [DAT_00805908], edx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }


}
