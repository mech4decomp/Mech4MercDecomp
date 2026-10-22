/*
 * FUN_00507790 (128 B) — DropZone object setup
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00507790(void)
{
    

extern void __cdecl FUN_100501b63(void);
extern void __cdecl FUN_100411bae(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca10(void);
__asm {
push esi
        push edi
        mov edi, [esp+0x0C]
        mov esi, [edi]
        mov eax, [esi]
        push 0x64
        mov ecx, esi
        call dword ptr [eax+0x14]
        push edi
        call FUN_100501b63
        mov edx, [esi]
        add esp, 0x04
        mov ecx, esi
        call dword ptr [edx+0x04]
        mov ecx, [edi+0x04]
        mov esi, eax
        push 0x00
        lea eax, [esp+0x10]
        push eax
        mov dword ptr [esi], 0x00000064
        mov dword ptr [esi+0x60], -1
        push 0x00776FCC
        mov dword ptr [esp+0x18], 0x0076B768
        call FUN_100411bae
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov eax, [ecx]
        xor eax, edx
        mov edx, [eax+0x10]
        xor edx, 0x85739531
        jz skip_set
        mov ecx, [esp+0x0C]
        push ecx
        mov ecx, [eax+0x10]
        xor ecx, 0x85739531
        call FUN_1004fca10
        mov [esi+0x60], eax
skip_set:
        pop edi
        pop esi
        ret
    }


}
