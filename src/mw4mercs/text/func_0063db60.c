/*
 * FUN_0063DB60 (885 B) — __fastcall (ECX = param_1), RET 0.
 *
 * Initializes a HUD object: zeroes several fields, then issues a series
 * of FUN_005614d0 calls to set up 13 HUD elements, reading per-mech
 * layout data from tables at 0x78f240 (indexed by [this+0x110]*0xb0)
 * and a mech-name pointer table at 0x7b5638.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_005614d0(void);

extern int g_7b5638;            /* mech-name pointer table @ 0x7b5638 */

extern int g_78f240;
extern int g_78f244;
extern int g_78f248;
extern int g_78f24c;
extern int g_78f250;
extern int g_78f254;
extern int g_78f258;
extern int g_78f25c;
extern int g_78f260;
extern int g_78f264;
extern int g_78f268;
extern int g_78f26c;
extern int g_78f270;
extern int g_78f274;
extern int g_78f278;
extern int g_78f27c;
extern int g_78f280;
extern int g_78f284;
extern int g_78f288;
extern int g_78f28c;
extern int g_78f290;
extern int g_78f294;
extern int g_78f298;
extern int g_78f29c;
extern int g_78f2a0;
extern int g_78f2a4;
extern int g_78f2a8;
extern int g_78f2ac;
extern int g_78f2c0;
extern int g_78f2c4;
extern int g_78f2c8;
extern int g_78f2cc;
extern int g_78f2d0;
extern int g_78f2d4;
extern int g_78f2d8;
extern int g_78f2dc;
extern int g_78f2e0;
extern int g_78f2e4;
extern int g_78f2e8;
extern int g_78f2ec;

extern const char g_78f198;     /* "hud\\hud5" @ 0x78f198 */

__declspec(naked) void __cdecl FUN_0063db60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        mov     dword ptr [esi + 0xcc], edi
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0xd0], edi
        mov     dword ptr [esi + 0xd8], edi
        lea     eax, [esi + 0x50]
        mov     ecx, 0xc
    L_3db86:
        mov     dword ptr [eax + 0x90], edi
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x30], edi
        add     eax, 0x4
        dec     ecx
        jnz     L_3db86
        mov     ecx, dword ptr [esi + 0x110]
        lea     eax, [ecx + ecx*0x4]
        push    0x43000000
        lea     eax, [ecx + eax*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f24c]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f248]
        push    edx
        mov     edx, dword ptr [eax + g_78f244]
        mov     eax, dword ptr [eax + g_78f240]
        push    edx
        push    eax
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f25c]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f258]
        push    edx
        mov     edx, dword ptr [eax + g_78f254]
        mov     eax, dword ptr [eax + g_78f250]
        push    edx
        push    eax
        push    0x1
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f26c]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f268]
        push    edx
        mov     edx, dword ptr [eax + g_78f264]
        mov     eax, dword ptr [eax + g_78f260]
        push    edx
        push    eax
        push    0x2
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f27c]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f278]
        push    edx
        mov     edx, dword ptr [eax + g_78f274]
        mov     eax, dword ptr [eax + g_78f270]
        push    edx
        push    eax
        push    0x3
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        shl     eax, 0x4
        push    0x43000000
        mov     edx, dword ptr [eax + g_78f28c]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f288]
        push    edx
        mov     edx, dword ptr [eax + g_78f284]
        mov     eax, dword ptr [eax + g_78f280]
        push    edx
        push    eax
        push    0x4
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f29c]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f298]
        push    edx
        mov     edx, dword ptr [eax + g_78f294]
        mov     eax, dword ptr [eax + g_78f290]
        push    edx
        push    eax
        push    0x5
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f2ac]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f2a8]
        push    edx
        mov     edx, dword ptr [eax + g_78f2a4]
        mov     eax, dword ptr [eax + g_78f2a0]
        push    edx
        push    eax
        push    0x6
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x42480000
        push    0x437c0000
        push    edi
        push    0x435c0000
        push    0x7
        push    offset g_78f198
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f2cc]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f2c8]
        push    edx
        mov     edx, dword ptr [eax + g_78f2c4]
        mov     eax, dword ptr [eax + g_78f2c0]
        push    edx
        push    eax
        push    0x8
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f2dc]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f2d8]
        push    edx
        mov     edx, dword ptr [eax + g_78f2d4]
        mov     eax, dword ptr [eax + g_78f2d0]
        push    edx
        push    eax
        push    0x9
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        mov     ecx, dword ptr [esi + 0x110]
        lea     edx, [ecx + ecx*0x4]
        lea     eax, [ecx + edx*0x2]
        mov     ecx, dword ptr [ecx*4 + g_7b5638]
        push    0x43000000
        shl     eax, 0x4
        mov     edx, dword ptr [eax + g_78f2ec]
        push    0x43000000
        push    edx
        mov     edx, dword ptr [eax + g_78f2e8]
        push    edx
        mov     edx, dword ptr [eax + g_78f2e4]
        mov     eax, dword ptr [eax + g_78f2e0]
        push    edx
        push    eax
        push    0xa
        push    ecx
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x436e0000
        push    0x42880000
        push    0x43650000
        push    0xb
        push    offset g_78f198
        mov     ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x437e0000
        push    0x42880000
        push    0x43730000
        push    0xc
        push    offset g_78f198
        mov     ecx, esi
        call    FUN_005614d0
        pop     edi
        pop     esi
        ret
    }
}
