/* func_004dfdf0 - FUN_004dfdf0 (112 B) - __thiscall (ECX=this)
 * Adept::ApplicationTask constructor: sets up vtables, initializes a
 * sub-object at this+0x10, and allocates/constructs a 0x18-byte child
 * stored at this+0x20.
 */
extern void *__cdecl FUN_00415180(void);
extern void *__cdecl FUN_004174d0(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void *__cdecl FUN_00417640(void);
extern int g_007b8c10;

__declspec(naked) void func_004dfdf0(void)
{
    __asm {
        mov eax, dword ptr [g_007b8c10]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        call FUN_00415180
        lea ebx, [esi+0x10]
        push 0x0
        mov ecx, ebx
        mov dword ptr [esi+0x8], 0
        mov dword ptr [esi+0xc], 0
        mov dword ptr [esi], 0x76cd9c   /* vtable ptr */
        call FUN_004174d0
        mov dword ptr [ebx], 0x7739c8   /* vtable ptr */
        push 0x18
        mov dword ptr [esi], 0x7739c0   /* vtable ptr */
        call FUN_004084d0
        mov edi, eax
        add esp, 0x4
        test edi, edi
        jz L_null
        push 0x1
        push ebx
        mov ecx, edi
        call FUN_00417640
        mov dword ptr [esi+0x20], edi
        mov dword ptr [edi], 0x773988   /* vtable ptr */
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
L_null:
        xor eax, eax
        mov dword ptr [esi+0x20], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret
    }
}
