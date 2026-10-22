/*
 * FUN_1002e6d0 (96 B) — __fastcall.
 * Jump-table dispatch on a byte from [ecx+8]; table at 0x1002e730 (external).
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075068;
extern void __cdecl FUN_1002e3e0(void);

__declspec(naked) void __fastcall FUN_1002e6d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x8]
        mov     dx, word ptr [eax]
        cmp     dx, 0x7f
        ja      default
        movzx   edx, dx
        mov     edx, dword ptr [edx*4 + g_10075068]
        cmp     edx, 0x7
        ja      default
        jmp     dword ptr [edx*4 + 0x1002e730]
    case1:
        jmp     FUN_1002e3e0
    case4:
        add     eax, 0x2
        mov     dword ptr [ecx + 0x2c], eax
        mov     dword ptr [ecx], 0x5
        mov     eax, 0x6
        ret
    case0:
        mov     dword ptr [ecx], 0x1
        mov     eax, 0xb
        ret
    case2:
        mov     dword ptr [ecx + 0x2c], eax
        mov     dword ptr [ecx], 0x9
        mov     eax, 0xb
        ret
    case7:
        mov     eax, 0xa
        ret
    default:
        mov     eax, 0xc
        ret
    }
}
