/*
 * FUN_00430ad0 (399 B) — MLR look-up-light constructor. __thiscall
 * (RET 0x4). Sets vtable, reads MapOrigin/MapSize/ZoneSize/MapName
 * config via FUN_00411bf0 + sscanf (IAT 0x76b2dc), computes scale
 * factors, then calls FUN_00430f10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b97fc;
extern int g_007b87ec;
extern float g_76d064;
extern char g_76e254;
extern char g_76e2b0;
extern char g_76e2a8;
extern char g_76e2a0;
extern char g_76e294;
extern char g_76e28c;
extern char g_76e27c;
extern char g_76e274;
extern char g_76d860;
extern void *g_76b2dc;
extern void FUN_00482560(void);
extern void FUN_00411bf0(void);
extern void FUN_00411d60(void);
extern void FUN_00412740(void);
extern void FUN_00412780(void);
extern void FUN_00430f10(void);

__declspec(naked) void FUN_00430ad0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b97fc]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x14]
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00482560
        push    0x0
        lea     ecx, [esp+0x18]
        push    ecx
        lea     ebx, [esi+0x80]
        lea     ebp, [esi+0x84]
        mov     dword ptr [esi+0xa4], 0
        push    offset g_76e2b0
        mov     ecx, edi
        mov     dword ptr [esi], offset g_76e254
        mov     dword ptr [esi+0xac], 0
        mov     dword ptr [ebx], 0
        mov     dword ptr [ebp], 0
        mov     dword ptr [esi+0x88], 0
        call    FUN_00411bf0
        test    al, al
        jz      skip1
        mov     edx, dword ptr [esp+0x14]
        lea     eax, [esi+0x88]
        push    eax
        push    ebp
        push    ebx
        push    offset g_76d860
        push    edx
        call    dword ptr [g_76b2dc]
        add     esp, 0x14
skip1:
        push    0x0
        lea     eax, [esp+0x18]
        push    eax
        lea     ebx, [esi+0x9c]
        lea     ebp, [esi+0xa0]
        push    offset g_76e2a8
        mov     ecx, edi
        mov     dword ptr [ebx], 1
        mov     dword ptr [ebp], 1
        call    FUN_00411bf0
        test    al, al
        jz      skip2
        mov     ecx, dword ptr [esp+0x14]
        push    ebp
        push    ebx
        push    offset g_76e2a0
        push    ecx
        call    dword ptr [g_76b2dc]
        add     esp, 0x10
skip2:
        push    0x0
        lea     edx, [esp+0x18]
        push    edx
        lea     ebx, [esi+0x8c]
        push    offset g_76e294
        mov     ecx, edi
        mov     dword ptr [ebx], 0x44a00000
        mov     dword ptr [esi+0x90], 0x44a00000
        call    FUN_00411bf0
        test    al, al
        jz      skip3
        mov     eax, dword ptr [esp+0x14]
        push    ebx
        push    ebx
        push    offset g_76e28c
        push    eax
        call    dword ptr [g_76b2dc]
        add     esp, 0x10
skip3:
        fld     dword ptr [g_76d064]
        lea     eax, [esi+0xa8]
        fdiv    dword ptr [ebx]
        push    0x0
        push    eax
        push    offset g_76e27c
        mov     ecx, edi
        mov     dword ptr [eax], 0x3f000000
        fstp    dword ptr [esi+0x94]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [esi+0x90]
        fstp    dword ptr [esi+0x98]
        call    FUN_00411d60
        mov     ecx, dword ptr [g_007b87ec]
        push    ecx
        lea     ebx, [esi+0xa4]
        mov     ecx, ebx
        call    FUN_00412740
        push    0x0
        lea     edx, [esp+0x18]
        push    edx
        push    offset g_76e274
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      skip4
        mov     eax, dword ptr [esp+0x14]
        push    eax
        mov     ecx, ebx
        call    FUN_00412780
skip4:
        mov     ecx, esi
        call    FUN_00430f10
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
