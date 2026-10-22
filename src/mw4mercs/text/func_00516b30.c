/*
 * func_00516B30 - 127 bytes
 * Singleton cleanup / destruction
 */
__declspec(naked) void func_00516B30()
{
    

extern int DAT_007f27d0;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004c8e4f(void);
extern void __cdecl FUN_00607fcb(void);
extern void __cdecl FUN_100408485(void);
__asm {
        mov eax, dword ptr [DAT_007f27d0]
        test eax, eax
        jz   already_cleaned
        mov eax, dword ptr [DAT_007dab44]
        mov  eax, [eax]
        push esi
        xor eax, dword ptr [DAT_007dab40]
        mov  ecx, [eax+0x14]
        xor  ecx, 0x85739531
        jz   skip_first
        mov  edx, [eax+0xC]
        xor  edx, 0x85739531
        mov  cl, [edx+0x17]
        test cl, cl
        jnz  skip_first
        mov  eax, [eax+0x14]
        xor  eax, 0x85739531
        jz   skip_call
        mov  edx, [eax]
        push 1
        mov  ecx, eax
        call dword ptr [edx]
skip_call:
        push 5
        call FUN_1004c8e4f
        add  esp, 4
skip_first:
        mov esi, dword ptr [DAT_007f27d0]
        test esi, esi
        jz   skip_free
        mov  ecx, esi
        call FUN_00607fcb
        push esi
        call FUN_100408485
        add  esp, 4
skip_free:
        mov dword ptr [DAT_007f27d0], 0x0
        mov  eax, 1
        pop  esi
        ret
already_cleaned:
        mov  eax, 1
        ret
    }


}
