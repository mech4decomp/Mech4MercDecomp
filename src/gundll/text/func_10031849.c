/*
 * FUN_10031849 (31 B) - __stdcall, RET 0x10.  Jump-table target of
 * FUN_10031680 (opcode 0xc351 case 2).  Selects ecx (2/0/3/1) via a second
 * jump table @0x10031904, then falls through to shared tail @0x1003187b.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10031904[];   /* jump table (.text data) */

__declspec(naked) void __stdcall FUN_10031849(void)
{
    __asm {
        mov     eax, dword ptr [eax + 0x10]
        mov     esi, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 0xc]
        dec     eax
        cmp     eax, 3
        mov     ecx, 2
        __emit 0x77         /* __emit: rel8 ja to external addr 0x1003187b; extern symbol forces rel32 */
        __emit 0x1e
        jmp     dword ptr [eax*4 + g_10031904]
        xor     ecx, ecx
        __emit 0xeb         /* __emit: rel8 jmp to external addr 0x1003187b; extern symbol forces rel32 */
        __emit 0x13
    }
}
