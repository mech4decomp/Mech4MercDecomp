// 0x00567100: FUN_00567100 - object lookup/validation function
// __cdecl, 1 param (pointer to int)
// Returns byte (al = 0 or byte from object)

__declspec(naked) unsigned char __cdecl func_00567100(int *param_1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041fd26(void);
extern void __cdecl FUN_10041fd17(void);
extern void __cdecl FUN_005dd71b(void);
extern void __cdecl FUN_10040840b(void);
extern int DAT_007f1f84;
extern void __cdecl FUN_100415140(void);
__asm {
sub esp, 0x10
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [edx]
        push ebx
        push ebp
        push esi
        xor eax, dword ptr [DAT_007dab40]
        mov eax, dword ptr [eax + 0x10]
        xor eax, 0x85739531
        mov ebx, dword ptr [eax + 0x54]
        test ebx, ebx
        push edi
        mov dword ptr [esp + 0x18], ecx
        mov byte ptr [esp + 0x1c], 0
        mov dword ptr [esp + 0x14], ebx
        mov dword ptr [esp + 0x24], 0
        jle done_false
        mov ebp, dword ptr [eax + 0x50]
        add ebp, 0x14
loop_start:
        cmp ebp, 0x14
        jz loop_next
        mov esi, dword ptr [ebp]
        test esi, esi
        jz loop_next
        mov ecx, esi
        call FUN_10041fd26
        test eax, eax
        jz loop_next
        mov ecx, esi
        call FUN_10041fd17
        mov edi, eax
        mov eax, dword ptr [edi + 0x170]
        test eax, eax
        jz loop_next
        lea ecx, [esp + 0x10]
        push ecx
        mov ecx, edi
        call FUN_005dd71b
        mov eax, dword ptr [eax]
        lea esi, [esp + 0x18]
strcmp_loop:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jnz strcmp_diff
        test cl, cl
        jz strcmp_eq
        mov dl, byte ptr [eax + 1]
        mov bl, byte ptr [esi + 1]
        mov cl, dl
        cmp dl, bl
        jnz strcmp_diff
        add eax, 2
        add esi, 2
        test cl, cl
        jnz strcmp_loop
strcmp_eq:
        xor eax, eax
        jmp strcmp_done
strcmp_diff:
        sbb eax, eax
        sbb eax, -1
strcmp_done:
        test eax, eax
        mov eax, dword ptr [esp + 0x10]
        setz bl
        test eax, eax
        jz check_match
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz check_match
        push eax
        call FUN_10040840b
        add esp, 4
check_match:
        test bl, bl
        jz loop_next_early
        mov eax, dword ptr [DAT_007f1f84]
        mov esi, dword ptr [edi + 0x170]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_100415140
        cmp al, 1
        jnz loop_next_early
        cmp dword ptr [esi + 0x5d0], -1
        jnz found_match
loop_next_early:
        mov ebx, dword ptr [esp + 0x14]
loop_next:
        mov eax, dword ptr [esp + 0x24]
        inc eax
        add ebp, 0x1c
        cmp eax, ebx
        mov dword ptr [esp + 0x24], eax
        jl loop_start
done_false:
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret
found_match:
        mov al, byte ptr [edi + 0x2f9]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret
    }


}
