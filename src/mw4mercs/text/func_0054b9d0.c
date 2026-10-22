/*
 * FUN_0054b9d0 (463 B) — __fastcall method on a large object (0x588+ bytes).
 * Called with ECX = this pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054b9d0(void)
{
    

extern void __cdecl FUN_00559bdd(void);
extern void __cdecl FUN_0055853f(void);
extern int DAT_0077b98c;
extern int DAT_0077d030;
extern void __cdecl FUN_00559b0d(void);
extern void __cdecl FUN_00559b04(void);
extern void __cdecl FUN_00559afb(void);
extern void __cdecl FUN_00559af2(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00559980(void);
extern void __cdecl FUN_00627a4a(void);
extern void __cdecl FUN_00627412(void);
extern void __cdecl FUN_006290d7(void);
__asm {
push    ecx
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx

        push    0x0C
        call FUN_00559bdd

        mov     eax, dword ptr [esi + 0xE0]
        mov     ecx, dword ptr [eax + 0x14]
        xor     ebx, ebx
        cmp     ecx, 5
        mov     byte ptr [esi + 0x588], bl
        mov     byte ptr [esi + 0x587], bl
        jz      L_0054BB9A

        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov     edi, eax

        mov     eax, dword ptr [esi + 0x564]
        cmp     eax, 3
        jz      L_0054BA61

        mov     ecx, dword ptr [esi + 0x51C]
        mov     edx, dword ptr [esi + 0x520]
        mov     dword ptr [esi + 0x568], eax
        mov     eax, dword ptr [esi + 0x518]
        mov     dword ptr [esi + 0x56C], eax
        mov     dword ptr [esi + 0x570], ecx
        mov     eax, dword ptr [esi + 0x528]
        mov     dword ptr [esi + 0x57C], eax
        mov     ecx, dword ptr [esi + 0x524]
        mov     dword ptr [esi + 0x574], edx
        mov     edx, dword ptr [esi + 0x52C]
        mov     dword ptr [esi + 0x578], ecx
        mov     dword ptr [esi + 0x580], edx

L_0054BA61:
        push    edi
        push    3
        mov     ecx, esi
        call FUN_0055853f

        fld dword ptr [DAT_0077b98c]

        mov     eax, dword ptr [edi + 0x24]

        fmul dword ptr [DAT_0077d030]

        mov     ecx, dword ptr [edi + 0x28]
        mov     edx, dword ptr [edi + 0x2C]
        mov     dword ptr [esi + 0x518], eax
        mov     dword ptr [esi + 0x528], ebx
        fstp    dword ptr [esi + 0x524]
        mov     dword ptr [esi + 0x51C], ecx
        push    3
        mov     ecx, esi
        mov     dword ptr [esi + 0x520], edx
        mov     dword ptr [esi + 0x52C], ebx
        call FUN_00559b0d

        push    0x1B
        mov     ecx, esi
        call FUN_00559b04

        push    0x22
        mov     ecx, esi
        call FUN_00559afb

        push    0x28
        mov     ecx, esi
        call FUN_00559af2

        mov     ecx, dword ptr [esi + 0xE0]
        mov     eax, dword ptr [ecx]
        push    ebx
        push    5
        call    dword ptr [eax + 4]

        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]

        mov ecx, dword ptr [DAT_007dab40]

        mov     al, byte ptr [esi + 0x32E]
        xor     edx, ecx
        add     edx, 0x40
        cmp     al, bl
        mov     dword ptr [esi + 0x5A8], ebx
        mov     dword ptr [esp + 0x0C], edx
        jz      L_0054BB0A

        mov     ecx, esi
        mov     byte ptr [esi + 0x32E], bl
        call FUN_00559980

L_0054BB0A:
        cmp     byte ptr [esi + 0x32F], bl
        jz      L_0054BB40

        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]

        xor ecx, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [ecx + 0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x40]
        mov     byte ptr [esi + 0x32F], bl
        jz      L_0054BB40

        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call FUN_00627a4a

L_0054BB40:
        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]

        xor ecx, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [ecx + 0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x40]
        jz      L_0054BB9A

        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call FUN_00627412

        mov eax, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [eax]

        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x0C]
        xor     ecx, 0x85739531
        cmp     byte ptr [ecx + 0x17], bl
        jz      L_0054BB9A

        mov     ecx, dword ptr [eax + 0x40]
        push    0x0D
        xor     ecx, 0x85739531
        call FUN_006290d7

        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x10]

L_0054BB9A:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }


}
