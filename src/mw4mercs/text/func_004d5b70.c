/*
 * FUN_004d5b70 (45 B) — __thiscall dispatcher. If param_1->field4 <=
 * this->field4->field14, calls a method pointer from a table; else calls
 * the global function pointer at 0x00772c48.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_00772c48;

__declspec(naked) void FUN_004d5b70(void)
{
    __asm {
        mov     edx, dword ptr [ecx+4]
        push    esi
        mov     esi, dword ptr [esp+8]
        mov     eax, dword ptr [esi+4]
        cmp     eax, dword ptr [edx+0x14]
        jg      L_5b91
        mov     edx, dword ptr [edx+0x18]
        lea     eax, [eax+eax*2]
        mov     eax, dword ptr [edx+eax*4-4]
        push    esi
        call    eax
        pop     esi
        ret     4
L_5b91:
        mov     eax, dword ptr [g_00772c48]
        push    esi
        call    eax
        pop     esi
        ret     4
    }
}
