/*
 * FUN_1003c818 (74 B) — __cdecl.
 * Dispatcher: sets global 0x1007569c and jumps to GetOEMCP/GetACP for
 * param_1 == -2/-3, or returns 0x1007568c for -4.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_1007569c;
extern unsigned int g_1007568c;
extern unsigned int g_10049144;
extern unsigned int g_10049140;

__declspec(naked) void __cdecl FUN_1003c818(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        and     dword ptr [g_1007569c], 0
        cmp     eax, -0x2
        jnz     case3
        mov     dword ptr [g_1007569c], 1
        jmp     dword ptr [g_10049144]
    case3:
        cmp     eax, -0x3
        jnz     case4
        mov     dword ptr [g_1007569c], 1
        jmp     dword ptr [g_10049140]
    case4:
        cmp     eax, -0x4
        jnz     done
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [g_1007569c], 1
    done:
        ret
    }
}
