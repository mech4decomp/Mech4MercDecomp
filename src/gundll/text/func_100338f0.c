/*
 * FUN_100338F0 (94 B) - __stdcall, RET 0x10.
 * Event-log helper: RegisterEventSourceA / ReportEventA / DeregisterEventSourceA.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049028;   /* IAT: RegisterEventSourceA */
extern void *g_10049024;   /* IAT: ReportEventA */
extern void *g_10049030;   /* IAT: DeregisterEventSourceA */
extern unsigned short g_1004b124[];

__declspec(naked) void __stdcall FUN_100338F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x8
        push    esi
        push    eax
        push    0x0
        call    dword ptr [g_10049028]
        mov     esi, eax
        test    esi, esi
        jz      done
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x1c]
        push    0x0
        lea     eax, [esp + 0x8]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    0x0
        push    0x2
        push    0x0
        push    eax
        mov     dword ptr [esp + 0x1c], ecx
        shr     eax, 0x1e
        xor     ecx, ecx
        mov     cx, word ptr [eax*2 + g_1004b124]
        push    0x0
        mov     dword ptr [esp + 0x24], edx
        push    ecx
        push    esi
        call    dword ptr [g_10049024]
        push    esi
        call    dword ptr [g_10049030]
    done:
        pop     esi
        add     esp, 0x8
        ret     0x10
    }
}
