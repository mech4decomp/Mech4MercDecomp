// 0x00568320: FUN_00568320 - vehicle assignment function (variant)
// __cdecl, 2 params (uint param_1, undefined4 param_2)
// Returns void

__declspec(naked) void __cdecl func_00568320(unsigned int param_1, int param_2)
{
    

extern void __cdecl FUN_00580baf(void);
extern void __cdecl FUN_100566c42(void);
extern void __cdecl FUN_0064e5b8(void);
extern void __cdecl FUN_0064e4e8(void);
extern void __cdecl FUN_0064e09f(void);
extern void __cdecl FUN_0064e096(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca9c(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041517e(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_100415162(void);
extern void __cdecl FUN_00580c42(void);
extern void __cdecl FUN_0064dfe8(void);
extern void __cdecl FUN_100568158(void);
extern void __cdecl FUN_10040838c(void);
__asm {
sub esp, 0xc
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x18]
        test esi, 0xf00000
        push edi
        mov dword ptr [esp + 0xc], 0
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esp + 0x14], 0
        jz load_from_db
        lea eax, [esp + 0xc]
        push eax
        add esi, 0xff100000
        push esi
        call FUN_00580baf
        add esp, 8
        jmp epilogue
load_from_db:
        call FUN_100566c42
        mov edi, eax
        push esi
        mov ecx, edi
        call FUN_0064e5b8
        test al, al
        jz epilogue
        push esi
        mov ecx, edi
        call FUN_0064e4e8
        mov ebp, eax
        mov ecx, ebp
        call FUN_0064e09f
        mov edi, dword ptr [eax]
        mov ecx, ebp
        call FUN_0064e096
        cmp edi, dword ptr [eax + 4]
        jz epilogue
loop_start:
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov edx, dword ptr [edi]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0x10]
        push edx
        xor ecx, 0x85739531
        call FUN_1004fca9c
        mov esi, eax
        test esi, esi
        jz loop_next
        mov eax, dword ptr [esi + 0x10]
        shr eax, 0x13
        test al, 1
        jnz loop_next
        mov eax, dword ptr [DAT_007f268c]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_10041517e
        cmp al, 1
        jnz loop_next
        mov esi, dword ptr [esi + 0x2fc]
        test esi, esi
        jz loop_next
        mov eax, dword ptr [DAT_007f24d8]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_100415162
        cmp al, 1
        jnz loop_next
        mov al, byte ptr [esi + 0x2f9]
        test al, al
        jnz loop_next
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x1c], esi
        jz grow_array
        test eax, eax
        jz store_skip
        mov dword ptr [eax], esi
        mov eax, dword ptr [esp + 0x10]
store_skip:
        add eax, 4
        mov dword ptr [esp + 0x10], eax
        jmp loop_next
grow_array:
        push 1
        lea ecx, [esp + 0x20]
        push ecx
        push eax
        lea ecx, [esp + 0x18]
        call FUN_00580c42
loop_next:
        mov ecx, ebp
        add edi, 4
        call FUN_0064dfe8
        cmp edi, dword ptr [eax + 4]
        jnz loop_start
epilogue:
        mov esi, dword ptr [esp + 0xc]
        cmp esi, dword ptr [esp + 0x10]
        jz free_check
        mov edi, dword ptr [esp + 0x20]
dispatch_loop:
        mov edx, dword ptr [esi]
        push edi
        push edx
        call FUN_100568158
        mov eax, dword ptr [esp + 0x18]
        add esi, 4
        add esp, 8
        cmp esi, eax
        jnz dispatch_loop
        mov esi, dword ptr [esp + 0xc]
free_check:
        test esi, esi
        jz done
        push esi
        call FUN_10040838c
        add esp, 4
done:
        pop edi
        pop esi
        pop ebp
        add esp, 0xc
        ret
    }


}
