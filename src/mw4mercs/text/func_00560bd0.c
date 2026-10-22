// 0x00560BD0: destructor for class with vtable 0x77DF4C
// __fastcall, this in ecx

extern void __cdecl FUN_004084e0(void *p);
extern void __fastcall FUN_005603b0(void *this);
extern void __fastcall FUN_0055f500(void *this);

__declspec(naked) void __fastcall func_00560bd0(void *this)
{
    

extern int DAT_007ddddc;
extern int DAT_007dddd8;
__asm {
        mov eax, dword ptr [DAT_007ddddc]
        push esi
        push edi
        mov edi, ecx
        dec eax
        mov dword ptr [edi], 0x77DF4C
        mov dword ptr [DAT_007ddddc], eax
        jne skip_cleanup
        mov esi, dword ptr [DAT_007dddd8]
        test esi, esi
        je  skip_cleanup
        mov ecx, esi
        call FUN_0055f500
        push esi
        call FUN_004084e0
        add esp, 4
skip_cleanup:
        mov ecx, edi
        call FUN_005603b0
        pop edi
        pop esi
        ret
    }


}
