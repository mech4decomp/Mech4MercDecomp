/*
 * FUN_005116E0 (123 B) — NetServer script loader
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005116e0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_0052e12a(void);
extern int DAT_007ddd21;
extern void __cdecl FUN_006bbbb7(void);
extern int DAT_00858a38;
extern void __cdecl FUN_0060fc84(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, [eax]
        push esi
        xor ecx, edx
        push edi
        mov edi, [ecx+0x0C]
        xor edi, 0x85739531
        lea esi, [edi+0x205D24]
        mov ebx, 0x18
loop_start:
        mov ecx, esi
        call FUN_0052e12a
        add esi, 0x22AC
        dec ebx
        jnz loop_start
        mov al, byte ptr [DAT_007ddd21]
        test al, al
        jnz skip_load
        push 0x00
        push 0x1000
        push 0x007797B8
        call FUN_006bbbb7
        mov [ebp+0x3C], eax
        mov dword ptr [ebp+0x1C], 0x00000003
        mov dword ptr [DAT_00858a38], 0x535260
skip_load:
        lea ecx, [edi+0xF4]
        mov byte ptr [ebp+0x28], 0x00
        call FUN_0060fc84
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }


}
