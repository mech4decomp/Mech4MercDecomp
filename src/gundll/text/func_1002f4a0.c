/*
 * FUN_1002F4A0 (83 B) - __stdcall, RET 0x8.  Toggles an event/flag on an
 * object: arg1 = object, arg2 = byte flag.  If object->enabled(+0x10) and
 * flag clear and object->handle(+0x30) set -> ResetEvent(object->id+0x14)
 * and store flag.  Else if (enabled clear && flag set) or (enabled set &&
 * flag set && handle set) -> SetEvent(object->id+0x14).  Stores flag at
 * +0x10, returns 0.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int (__stdcall *g_100490a4)(void);   /* SetEvent IAT */
extern void (__cdecl *g_100490a8)(void);    /* ResetEvent IAT */

__declspec(naked) void __stdcall FUN_1002F4A0(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [esi + 0x10]
        test    al, al
        je      L_else
        test    bl, bl
        jne     L_else2
        mov     ecx, dword ptr [esi + 0x30]
        test    ecx, ecx
        je      L_else2
        mov     eax, dword ptr [esi + 0x14]
        push    eax
        call    dword ptr [g_100490a8]
        mov     byte ptr [esi + 0x10], bl
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x8
    L_else2:
        test    al, al
        jne     L_store
    L_else:
        test    bl, bl
        je      L_store
        mov     eax, dword ptr [esi + 0x30]
        test    eax, eax
        je      L_store
        mov     ecx, dword ptr [esi + 0x14]
        push    ecx
        call    dword ptr [g_100490a4]
    L_store:
        mov     byte ptr [esi + 0x10], bl
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
