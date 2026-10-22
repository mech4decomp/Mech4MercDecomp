/*
 * FUN_004C1730 (210 B) - MLR node constructor (thiscall, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c6430(void *p);
extern void __cdecl FUN_006f4950(void *p);
extern void *__cdecl FUN_004084d0(int n);
extern void *__cdecl FUN_00487830(void *this, int a, void *b);
extern void __cdecl FUN_006f49a0(void);

extern int g_7b3800[];
extern int g_7b3b28[];
extern int g_7b3b2c[];
extern int g_7b3b30[];
extern int g_7b3900[];
extern int g_7b9590;
extern int g_7da724;

__declspec(naked) void __fastcall FUN_004c1730(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_004c6430
        mov     eax, dword ptr [ebx + 0x18]
        mov     ecx, eax
        shr     ecx, 0x2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_7b3800]
        mov     ecx, eax
        shr     ecx, 0x5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*0x2]
        shl     ecx, 0x2
        mov     dword ptr [ebx + 0x1c], edx
        mov     edx, dword ptr [ecx + g_7b3b28]
        mov     dword ptr [ebx + 0x130], edx
        mov     edx, dword ptr [ecx + g_7b3b2c]
        mov     ecx, dword ptr [ecx + g_7b3b30]
        shr     eax, 0xa
        and     eax, 0x1
        mov     dword ptr [ebx + 0x134], edx
        mov     edx, dword ptr [eax*4 + g_7b3900]
        mov     eax, dword ptr [g_7b9590]
        mov     dword ptr [ebx + 0x138], ecx
        lea     edi, [ebx + 0x144]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        mov     dword ptr [ebx], 0x7715d4
        push    eax
        mov     dword ptr [ebx + 0x13c], edx
        rep movsd
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_zero
        mov     ecx, dword ptr [g_7da724]
        push    ecx
        push    0x0
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebx + 0x174], eax
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x4
    l_zero:
        xor     eax, eax
        mov     dword ptr [ebx + 0x174], eax
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x4
    }
}
