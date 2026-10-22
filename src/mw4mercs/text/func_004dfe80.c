/* func_004dfe80 - FUN_004dfe80 (51 B) - __thiscall (ECX=this)
 * Adept::ApplicationTask destructor: resets vtable, releases the child
 * at this+0x20, destroys sub-object at this+0x10, and base destructor.
 */
extern void *__cdecl FUN_004174f0(void);
extern void *__cdecl FUN_00415380(void);

__declspec(naked) void func_004dfe80(void)
{
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi+0x20]
        mov ecx, dword ptr [esi+0x4]
        mov eax, dword ptr [ecx]
        mov dword ptr [edi], 0x7739c0   /* vtable ptr */
        call dword ptr [eax+0x8]        /* virtual call */
        test esi, esi
        jz L_skip
        mov edx, dword ptr [esi]
        push 0x1
        mov ecx, esi
        call dword ptr [edx]            /* virtual call */
L_skip:
        lea ecx, [edi+0x10]
        call FUN_004174f0
        mov ecx, edi
        call FUN_00415380
        pop edi
        pop esi
        ret
    }
}
