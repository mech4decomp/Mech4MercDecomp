/*
 * FUN_00578950 (107 B) — Iterates over a list of object IDs and calls
 * a method on each one.
 *
 * Calls FUN_00566EF0 to enumerate objects matching param_1, then for
 * each object in the result buffer, calls FUN_005FBE80 (__thiscall)
 * with ECX = object pointer and param_2 as the byte argument.
 *
 * __cdecl, void return.
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_00566EF0(int param1, void *param2, int param3);
extern void __cdecl FUN_005FBE80(int this, int param);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void __cdecl FUN_00578950(int param_1, int param_2)
{
    __asm {
        sub     esp, 0xc
        mov     ecx, dword ptr [esp + 0x10]
        push    esi
        push    0
        lea     eax, [esp + 8]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        call    FUN_00566EF0
        mov     esi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0xc
        cmp     esi, eax
        jz      l_free
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
l_loop:
        mov     ecx, dword ptr [esi]
        push    edi
        call    FUN_005FBE80
        mov     eax, dword ptr [esp + 0x0c]
        add     esi, 4
        cmp     esi, eax
        jnz     l_loop
        mov     esi, dword ptr [esp + 0x08]
        pop     edi
l_free:
        test    esi, esi
        jz      l_done
        push    esi
        call    FUN_004084E0
        add     esp, 4
l_done:
        pop     esi
        add     esp, 0xc
        ret
    }
}
