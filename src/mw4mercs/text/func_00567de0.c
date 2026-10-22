// 0x00567DE0: FUN_00567de0 - vehicle assignment function
// __cdecl, 2 params (uint param_1, undefined4 param_2)
// Returns void

__declspec(naked) void __cdecl func_00567de0(unsigned int param_1, int param_2)
{
    

/* extern data/function symbols for __emit replacements */
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
extern void __cdecl FUN_0058125b(void);
extern void __cdecl FUN_00580c3a(void);
extern void __cdecl FUN_0064dfe0(void);
extern void __cdecl FUN_004084e0(void);
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
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_00580baf
        add esp, 8
        jmp epilogue
load_from_db:
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_100566c42
        mov edi, eax
        push esi
        mov ecx, edi
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064e5b8
        test al, al
        jz epilogue
        push esi
        mov ecx, edi
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064e4e8
        mov ebp, eax
        mov ecx, ebp
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064e09f
        mov edi, dword ptr [eax]
        mov ecx, ebp
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064e096
        cmp edi, dword ptr [eax + 4]
        jz epilogue
loop_start:
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load */
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [ecx]
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load */
        mov ecx, dword ptr [DAT_007dab40]
        mov edx, dword ptr [edi]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0x10]
        push edx
        xor ecx, 0x85739531
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_1004fca9c
        mov esi, eax
        test esi, esi
        jz loop_next
        mov eax, dword ptr [esi + 0x10]
        shr eax, 0x13
        test al, 1
        jnz loop_next
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load */
        mov eax, dword ptr [DAT_007f268c]
        mov ecx, dword ptr [esi + 4]
        push eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_10041517e
        cmp al, 1
        jnz loop_next
        mov esi, dword ptr [esi + 0x2fc]
        test esi, esi
        jz loop_next
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load */
        mov eax, dword ptr [DAT_007f24d8]
        mov ecx, dword ptr [esi + 4]
        push eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
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
        lea ecx, [esp + 0x1c]
        push ecx
        push eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0058125b
        mov eax, dword ptr [esp + 0x18]
        add esp, 8
        add eax, 4
        mov dword ptr [esp + 0x10], eax
        jmp loop_next
grow_array:
        push 1
        lea edx, [esp + 0x20]
        push edx
        push eax
        lea ecx, [esp + 0x18]
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_00580c3a
loop_next:
        mov ecx, ebp
        add edi, 4
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_0064dfe0
        cmp edi, dword ptr [eax + 4]
        jnz loop_start
epilogue:
        mov eax, dword ptr [esp + 0xc]
        cmp eax, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        jz free_check
set_loop:
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [esp + 0x14]
        mov dword ptr [ecx + 0x1b8], edx
        mov ecx, dword ptr [esp + 4]
        add eax, 4
        cmp eax, ecx
        jnz set_loop
        /* __emit: MSVC6 encodes mov eax,[esp+0] as 8B 04 24, not 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
free_check:
        test eax, eax
        jz done
        push eax
        /* __emit: MSVC6 inline asm cannot encode call to absolute address */
        call FUN_004084e0
        add esp, 4
done:
        add esp, 0xc
        ret
    }


}
