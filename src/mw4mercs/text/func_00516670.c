/*
 * FUN_00516670 (139 B) — Game state initialization helper
 * Calls various initialization functions and sets up state fields.
 *
 * __fastcall (ECX = this pointer)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_0051ed70(void);
void __cdecl FUN_005369b0(void);
int __cdecl FUN_00417a40(void *this);
void * __cdecl FUN_00518090(void *this);
void __cdecl FUN_005363b0(int arg);

__declspec(naked) void func_00516670(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f1fb8;
__asm {
push    esi
        mov     esi, ecx
        call    FUN_0051ed70
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x0C]
        xor     ecx, 0x85739531
        call    FUN_005369b0
        mov edx, dword ptr [DAT_007f1fb8]
        lea     ecx, [edx + 0x10]
        call    FUN_00417a40
        mov     ecx, esi
        mov     dword ptr [esi + 0x4099C], eax
        mov     dword ptr [esi + 0x40EE0], 0
        call    FUN_00518090
        mov edx, dword ptr [DAT_007dab40]
        mov     dword ptr [esi + 0x409A0], eax
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x0C]
        lea     eax, [ecx + 0x0C]
        mov     ecx, dword ptr [esi + 0x40EE8]
        push    ecx
        mov     ecx, dword ptr [eax]
        xor     edx, 0x85739531
        xor     ecx, 0x85739531
        mov     byte ptr [edx+0x3531], 0
        call    FUN_005363b0
        mov     eax, 0x01
        pop     esi
        ret
    }


}
