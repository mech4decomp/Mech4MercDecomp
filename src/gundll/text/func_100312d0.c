/*
 * FUN_100312d0 (165 B) � __fastcall.
 * Object destructor with SEH frame: sets vtable pointers, releases two
 * sub-objects, calls a cleanup helper, restores the SEH chain.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100489cb(void);   /* SEH handler */
extern void __stdcall FUN_10031620(void);
extern void __cdecl FUN_10034490(void);
extern void *g_10049200;                  /* IAT */
extern char g_1004af90;
extern char g_1004af8c;
extern char g_1004af88;

__declspec(naked) void FUN_100312d0(void)
{
    __asm {
        push    -1
        push    offset FUN_100489cb
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], offset g_1004af90
        mov     dword ptr [esi + 0x4], offset g_1004af8c
        mov     dword ptr [esi + 0x8], offset g_1004af88
        push    esi
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_10031620
        mov     edx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [eax]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_330
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x10], 0x0
    L_330:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      L_344
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x18], 0x0
    L_344:
        push    0x1
        call    dword ptr [g_10049200]
        lea     eax, [esi + 0x44]
        lea     ecx, [eax + -0x4]
        neg     ecx
        sbb     ecx, ecx
        and     ecx, eax
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_10034490
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
