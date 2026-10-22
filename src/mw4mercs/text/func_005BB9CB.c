/*
 * FUN_005BB9CB (256 B) — __thiscall (this in ECX), RET 8 (2 stack args).
 * Gameplay update/refresh helper: calls FUN_004E1210, does an XOR-decoded
 * vtable dispatch, checks a float threshold (fcomp 0x76c5b0), and
 * conditionally increments a global counter [0x7b5518] while setting
 * [esi+0x64] to 1.0f.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F4950(void);
extern void __cdecl FUN_004E1210(void);
extern void __cdecl FUN_004ECF90(void);
extern void __cdecl FUN_0065D780(void);
extern void __cdecl FUN_0065D420(void);
extern void __cdecl FUN_0067A590(void);
extern void __cdecl FUN_005BC6F0(void);
extern void __cdecl FUN_005BBDB0(void);
extern void __cdecl FUN_006F49A0(void);

extern unsigned long g_7dd234;
extern unsigned long g_7dab44;
extern unsigned long g_7dab40;
extern float g_76c5b0;
extern unsigned long g_7b5518;

__declspec(naked) void func_005BB9CB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [g_7dd234]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006F4950
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004E1210
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x40]
        je      L_bba17
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 8]
L_bba17:
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 8]
        xor     ecx, 0x85739531
        call    FUN_004ECF90
        call    FUN_0065D780
        test    eax, eax
        je      L_bba48
        call    FUN_0065D780
        mov     ecx, eax
        call    FUN_0065D420
L_bba48:
        lea     ecx, [esi + 0x7c]
        call    FUN_0067A590
        fld     dword ptr [esi + 0x64]
        fcomp   dword ptr [g_76c5b0]
        __emit  0xDF            /* fnstsw ax: no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x41 */
        __emit  0xC4
        __emit  0x41
        jne     L_bba67
        mov     ecx, esi
        call    FUN_005BC6F0
L_bba67:
        mov     al, byte ptr [esi + 0x78]
        test    al, al
        je      L_bba75
        mov     ecx, esi
        call    FUN_005BBDB0
L_bba75:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x4c]
        cmp     dword ptr [eax + 0x14], 5
        jne     L_bbac4
        cmp     dword ptr [g_7b5518], 4
        jge     L_bbac4
        mov     ecx, dword ptr [esi + 0x64]
        mov     dword ptr [esp + 8], ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x64], 0x3f800000
        call    FUN_005BC6F0
        mov     eax, dword ptr [g_7b5518]
        mov     edx, dword ptr [esp + 8]
        inc     eax
        mov     dword ptr [esi + 0x64], edx
        mov     dword ptr [g_7b5518], eax
L_bbac4:
        call    FUN_006F49A0
        pop     esi
        ret     8
    }
}
