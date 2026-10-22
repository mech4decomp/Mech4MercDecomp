/*
 * FUN_00507050 (89 B) — Array iteration function
 * Iterates through an array of 0x2C-byte structures and calls a function
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00507050(void)
{
    

extern void __cdecl FUN_1004ec391(void);
extern int DAT_007dc868;
extern void __cdecl FUN_1004f23a1(void);
__asm {
push ebx
        push esi
        mov esi, ecx
        call FUN_1004ec391
        mov ebx, [esi+0x1C]
        lea eax, [ebx*4+ebx]
        lea ecx, [eax*2+ebx]
        mov eax, dword ptr [DAT_007dc868]
        mov edx, [eax+0x48]
        mov esi, [edx+ecx*4+0x10]
        test esi, esi
        jnz done
        push edi
        xor edi, edi
        xor esi, esi
        jmp check_empty
loop_top:
        mov eax, dword ptr [DAT_007dc868]
check_empty:
        test esi, esi
        jz loop_next
        cmp edi, ebx
        jz push_zero
        push 0x3F800000
        jmp call_func
push_zero:
        push 0x00
call_func:
        mov ecx, [eax+0x48]
        add ecx, esi
        call FUN_1004f23a1
loop_next:
        add esi, 0x2C
        inc edi
        cmp esi, 0xDC
        jl loop_top
        pop edi
done:
        pop esi
        pop ebx
        ret
    }


}
