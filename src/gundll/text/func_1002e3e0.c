/*
 * FUN_1002e3e0 (76 B) — __fastcall.
 * Switch on *(u16*)this[2]: maps values 0x2f/0x3c/0x3d/0x3e via a byte index
 * table (0x1002e440) and jump table (0x1002e42c).
 *
 * CFLAGS: /O1
 */

extern unsigned char g_1002e440[];
extern unsigned int g_1002e42c[];

__declspec(naked) void __fastcall FUN_1002e3e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x8]
        movzx   eax, word ptr [eax]
        add     eax, -0x2f
        cmp     eax, 0xf
        ja      def
        movzx   edx, byte ptr [eax + g_1002e440]
        jmp     dword ptr [edx*4 + g_1002e42c]
    case3e:
        mov     dword ptr [ecx], 0x2
        mov     eax, 0x2
        ret
    case3d:
        mov     eax, 0x5
        ret
    case3c:
        mov     dword ptr [ecx], 0x7
        mov     eax, 0xb
        ret
    case2f:
        mov     dword ptr [ecx], 0x8
        mov     eax, 0xb
        ret
    def:
        mov     eax, 0xc
        ret
    }
}
