/* func_004e0240 - FUN_004e0240 (75 B) - __thiscall (ECX=this, RET 0x10)
 * Constructor: builds an Event object via FUN_004e0060, initializes a
 * sub-object at this+0x1c, sets vtables, and calls FUN_0041fcd0.
 */
extern void *__cdecl FUN_004e0060(void);
extern void *__cdecl FUN_0041fc80(void);
extern void *__cdecl FUN_0041fcd0(void);
extern int g_007dc6c8;

__declspec(naked) void func_004e0240(void)
{
    __asm {
        mov eax, dword ptr [esp+0x10]  /* param_4 */
        mov edx, dword ptr [esp+0x8]   /* param_2 */
        push esi
        push edi
        push eax
        mov eax, dword ptr [g_007dc6c8]
        mov esi, ecx
        mov ecx, dword ptr [esp+0x18]  /* param_3 */
        push ecx
        push edx
        push eax
        mov ecx, esi
        call FUN_004e0060
        lea edi, [esi+0x1c]
        push 0x0
        mov ecx, edi
        call FUN_0041fc80
        mov ecx, dword ptr [esp+0xc]   /* param_1 */
        push ecx
        mov dword ptr [edi], 0x773a78  /* vtable ptr */
        mov ecx, edi
        mov dword ptr [esi], 0x773a6c  /* vtable ptr */
        call FUN_0041fcd0
        pop edi
        mov eax, esi
        pop esi
        ret 0x10
    }
}
